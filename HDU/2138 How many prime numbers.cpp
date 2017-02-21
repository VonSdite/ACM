#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	long long n;
	while(cin>>n)
	{
		long long cnt=0, tmp, j;
		for (int i = 0; i < n; ++i)
		{
			cin>>tmp;
			for ( j = 2; j*j <= tmp; ++j)
			{
				if(tmp%j==0) break;
			}
			if(j*j>tmp) cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}