#include "iostream"
#include "iomanip"
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b;
	while(cin>>a>>b&&(a||b))
	{
		a*=100;
		for (int i = a, j=0; i < a+100; ++i)
		{
			if(i%b==0) 
			{
				j++;
				if(j!=1) cout<<' ';
				cout<<setw(2)<<setfill('0')<<i%100;
			}
		}
		cout<<"\n";
	}
	return 0;
}