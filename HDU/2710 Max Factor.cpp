#include "iostream"
using namespace std;

int a[20002]={2,3,5,7}, b[5001];

void prime()
{
	int k=4, j;
	for (int i = 5; i < 20001; ++i)
	{
		for (j=2; j*j <= i; j++)
		{
			if(i%j==0) break;
		}
		if(j*j>i) a[k++]=i;
	}
}

int main(int argc, char const *argv[])
{
	prime();
	int n;
	while(cin>>n)
	{
		for (int i = 0; i < n; ++i)
		{
			cin>>b[i];
		}
		int max=0, ans=0;
		int j;
		for ( j = 0; j < n; ++j)
		{
			for (int i = 0; i <3000; ++i)
			{
				if(a[i]>b[j]) break;
				if(b[j]%a[i]==0&&max<a[i])
				{
					max=a[i];
					ans=b[j];
				}
			}
		}
		if(max==0) cout<<1<<endl;
		else cout<<ans<<endl;
	}
	return 0;
}