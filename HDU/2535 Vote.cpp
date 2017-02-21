#include "iostream"
#include "cstdlib"
using namespace std;
int cmp(const void *a, const void *b)
{
	return *(int *)a-*(int *)b;
}
int a[200];
int main(int argc, char const *argv[])
{
	int n;
	while(cin>>n&&n)
	{
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		qsort(a,n,sizeof(int),cmp);
		int cnt=0;
		for (int i = 0; i < n/2+1; ++i)
		{
			cnt+=a[i]/2+1;
		}
		cout<<cnt<<endl;
	}
	return 0;
}