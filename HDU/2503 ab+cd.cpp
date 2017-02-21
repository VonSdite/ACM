#include "iostream"
using namespace std;
int gcd(int a, int b)
{
	return (b==0)?a:gcd(b,a%b);
}
int mcd(int a, int b)
{
	return a*b/gcd(a,b);
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int a, b, c, d;
		cin>>a>>b>>c>>d;
		int fenmu=mcd(b,d);
		a=fenmu/b*a;
		c=fenmu/d*c;
		int fenzi=a+c;
		int gys=gcd(fenzi,fenmu);
		if(gys!=1)
		{
			fenzi/=gys;
			fenmu/=gys;
		}
		cout<<fenzi<<' '<<fenmu<<endl;
	}
	return 0;
}