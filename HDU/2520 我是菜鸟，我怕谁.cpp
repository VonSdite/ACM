#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<n*n%10000<<endl;
	}
	return 0;
}