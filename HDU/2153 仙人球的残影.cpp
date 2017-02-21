#include "iostream"
#include "iomanip"
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	while(cin>>n&&n)
	{
		int tmp=4*n-4;
		for (int i = 1; i <= 3*n-2; ++i)
		{
			if(i<=n)
			{
				cout<<setw(3)<<i;
				if(i%n==0) cout<<endl;
			}
			else if(i<2*n-1)
			{
				cout<<setw(3)<<tmp--;
				cout<<setw((n-1)*3)<<i<<endl;
			}
			else
			{
				cout<<setw(3)<<tmp--;
			}
		}
		cout<<endl;
	}
	return 0;
}