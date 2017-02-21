#include "iostream"
#include "cmath"
#include "iomanip"
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		double a, b, c, d;
		cin>>a>>b>>c>>d;
		cout<<setiosflags(ios::fixed)<<setprecision(1)<<sqrt(pow(a-c,2)+pow(b-d,2))<<endl;
	}
	return 0;
}