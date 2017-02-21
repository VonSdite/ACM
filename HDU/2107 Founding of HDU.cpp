#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	while(cin>>n&&n)
	{
		int max=0, tmp;
		for (int i = 1; i <= n; ++i)
		{
			cin>>tmp;
			if(tmp>max)
			{
				max=tmp;
			}
		}
		cout<<max<<endl;
	}
	return 0;
}