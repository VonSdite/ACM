#include "iostream"
#include "cmath"
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	while(cin>>n)
	{
		int x, y;
		int sum=0;
		for (int i = 0; i < n; ++i)
		{
			cin>>x;
			getchar();
			cin>>y;
			getchar();
			int t=0;
			while(x)
			{
				sum+=x%10*pow(y,t++);
				x/=10;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}