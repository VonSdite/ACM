#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);
	int n, a[200], j=0;
	while(cin>>n&&n)
	{
		int sum=0;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			sum+=a[i];
		}
		sum/=n;
		int cnt=0;
		for (int i = 0; i < n; ++i)
		{
			if(a[i]>sum) cnt+=a[i]-sum;
		}
		if(j!=0) cout<<endl;
		j++;
		cout<<cnt<<endl;
	}
	return 0;
}