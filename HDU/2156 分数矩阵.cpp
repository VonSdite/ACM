#include "iostream"
#include "iomanip"
using namespace std;
double a[50005]={1,3};
int main(int argc, char const *argv[])
{
	int n;
	for (int i = 2; i < 50005; ++i)
	{
		a[i]=2*a[i-1]-a[i-2]+2.0/(i+1);
	}
	while(cin>>n&&n)
	{
		cout<<setiosflags(ios::fixed)<<setprecision(2)<<a[n-1]<<endl;
	}
	return 0;
}