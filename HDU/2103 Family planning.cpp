#include "iostream"
#include "cmath"
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int m, n;
		cin>>m>>n;
		long long sum=0, tmp, k=0, flag=0;
		for (int i = 1; i <= n; ++i)
		{
			cin>>tmp;
			if(i>m)
			{
				sum+=pow(2,k++);
			}
			else
			{
				if(flag!=0)
				{
					sum+=pow(2,k++);
					flag++;
				}
				if(tmp==1) flag++;
			}
		}
		cout<<sum*10000<<" RMB"<<endl;
	}
	return 0;
}