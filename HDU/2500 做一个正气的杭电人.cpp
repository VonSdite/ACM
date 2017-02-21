#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	string a="HDU";
	while(n--)
	{
		int m;
		cin>>m;
		for (int i = 0; i < 3*m; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cout<<a;
			}
			cout<<endl;
		}
	}
	return 0;
}