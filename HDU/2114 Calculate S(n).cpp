#include "iostream"
#include "iomanip"
using namespace std;
int main(int argc, char const *argv[])
{
	__int64 n;
	while(cin>>n)
	{
		n%=10000;
		cout<<setfill('0')<<setw(4)<<n*n*(n+1)*(n+1)/4%10000<<endl;
	}
	return 0;
}