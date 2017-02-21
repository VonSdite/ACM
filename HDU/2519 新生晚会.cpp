#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, m;
		cin>>n>>m;
		if(m>n) cout<<0<<endl;
		else
		{
			long long ans=1;
			m=min(m,n-m);
			for (int i = 1; i <= m; ++i)
			{
				ans*=n;
				ans/=i;
				n--;
			}
			cout<<ans<<endl;
		}
	}
	return 0;
}