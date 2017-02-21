#include "iostream"
using namespace std;
int gcd(int a, int b)
{
	return (b==0)?a:gcd(b,a%b);
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n--)
	{
		int a, b, i;
		cin>>a>>b;
		for (i=2*b; ; i+=b)
		{
			if(gcd(a,i)==b) break;
		}
		cout<<i<<endl;
	}
	return 0;
}