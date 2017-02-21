#include "iostream"
#include "cmath"
using namespace std;
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
	int n, m;
	while(cin>>n>>m&&(n||m))
	{
		if(n*n-4*m<0) cout<<"No"<<endl;
		else if(n*n-4*m==0)
		{
			if(n%2) cout<<"No"<<endl;
			else cout<<"Yes"<<endl;
		}
		else
		{
			double tmp=sqrt(n*n-4*m);
			if(tmp-(int)tmp) cout<<"No"<<endl;
			else
			{
				if((n+(int)tmp)%2&&(n-(int)tmp)%2) cout<<"No"<<endl;
				else cout<<"Yes"<<endl;
			}
		}
	}
	return 0;
}