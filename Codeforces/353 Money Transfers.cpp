#include "cstdio"
#include "iostream"
#include "map"
using namespace std;
map<long long, int> mp;
int main(int argc, char const *argv[])
{
	int n, i;
	while(~scanf("%d", &n))
	{
		long long sum=0;
		int ans=n-1, x;
		for(i=0;i<n;i++) 
		{
			scanf("%d", &x);
			sum+=x;
			mp[sum]++;
			ans=min(ans,n-mp[sum]);
		}
		printf("%d\n", ans);
	}
	return 0;
}