#include "iostream"
#include "cstring"
#include "cstdlib"
using namespace std;
int cmp(const void *a, const void *b)
{
	return *(int*)a-*(int*)b;
}
int main(int argc, char const *argv[])
{
	int c;
	cin>>c;
	int arr1[1001], arr2[10000], arr3[10000];
	while(c--)
	{
		int n, k;
		cin>>n>>k;
		memset(arr3,0,sizeof(arr3));
		for (int i = 0; i < n; ++i)
		{
			cin>>arr1[i];
		}
		int kk=0;
		for (int i = 0; i < n; ++i)
		{
			for (int j = i+1; j < n; ++j)
			{
				int tmp=abs(arr1[i]-arr1[j]);
				if(arr3[tmp]==0)
				{
					arr3[tmp]++;
					arr2[kk++]=tmp;
				}
			}
		}
		qsort(arr2,kk,sizeof(int),cmp);
		cout<<arr2[k-1]<<endl;
	}
	return 0;
}