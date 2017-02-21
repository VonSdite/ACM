#include "iostream"
#include "cmath"
using namespace std;
int main(int argc, char const *argv[])
{
	long long n;
	while(cin>>n)
	{
		cout<<(long long)pow(2,n-1)*(n-2)+1<<endl;
	}
	return 0;
}