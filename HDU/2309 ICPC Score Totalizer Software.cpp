#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n, a[1000];
	while(cin>>n&&n)
	{
		int sum=0, max=-1, min=10000;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			sum+=a[i];
			if(a[i]>max) max=a[i];
			if(a[i]<min) min=a[i];
		}
		sum=sum-max-min;
		cout<<sum/(n-2)<<endl;
	}
	return 0;
}