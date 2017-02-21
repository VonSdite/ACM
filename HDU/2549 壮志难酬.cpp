#include "iostream"
#include "iomanip"
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		double a;
		cin>>a;
		a+=0.0000001;
		int n;
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			a-=(int)a;
			a*=10;
		}
		cout<<(int)a<<endl;
	}
	return 0;
}