#include "iostream"
#include "iomanip"
using namespace std;
int main(int argc, char const *argv[])
{
	double n, m;
	while(cin>>n>>m)
	{
		double gailv=(n-1)/n;
		for (int i = 0; i < m-1; ++i)
		{
			n--;
			gailv*=(n-1)/n;
		}
		n--;
		gailv/=n;
		cout<<setiosflags(ios::fixed)<<setprecision(2)<<gailv<<endl;
	}
	return 0;
}