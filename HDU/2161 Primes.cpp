#include "iostream"
using namespace std;

int main(int argc, char const *argv[])
{
	int n, t=1;
	while(cin>>n&&n>0)
	{
		if(n==2||n==1) cout<<t++<<": no\n";
		else
		{
			int i;
			for ( i = 2; i * i <= n; ++i)
			{
				if(n%i==0)
				{
					cout<<t++<<": no\n";
					break;
				}
			}
			if(i*i>n) cout<<t++<<": yes\n";
		}
	}
	return 0;
}