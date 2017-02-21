#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n, t=1;
	while(cin>>n&&n>0)
	{
		int sum=0, tmp;
		for (int i = 0; i < n; ++i)
		{
			cin>>tmp;
			sum+=tmp;
		}
		cout<<"Sum of #"<<t++<<" is "<<sum<<endl;
	}
	return 0;
}