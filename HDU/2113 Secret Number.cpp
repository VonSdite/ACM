#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	int c=0;
	while(cin>>n)
	{
		int sum=0;
		if(c) cout<<endl;
		c=1;
		while(n)
		{
			int t=n%10;
			if(t%2==0) sum+=t;
			n/=10;
		}
		cout<<sum<<endl;
	}
	return 0;
}