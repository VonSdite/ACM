#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int x;
		cin>>x;
		int i, cnt=0;
		for ( i = 1; ; ++i)
		{
			cnt+=i*i*i;
			if(cnt>=x) break;
		}
		cout<<i<<endl;
	}
	return 0;
}