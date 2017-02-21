#include "iostream"
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
	int a[100];
	while(c--)
	{
		int n;
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		qsort(a,n,sizeof(int),cmp);
		cout<<a[1]<<endl;
	}
	return 0;
}