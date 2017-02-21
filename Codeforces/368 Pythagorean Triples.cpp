#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	long long n;
	while(cin>>n)
	{
		if(n<3) cout<<-1<<endl;
		else 
		{
			long long m, k;
			if(n%2)
			{
				long long nn=(n-1)/2;
				m=2*nn*nn+2*nn;
				k=m+1;
				cout<<m<<' '<<k<<endl;
			}
			else
			{
				long long nn=n/2;
				m=nn*nn-1;
				k=nn*nn+1;
				cout<<m<<' '<<k<<endl;
			}
		}
	}
	return 0;
}