#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

long long t[100005];

int main(int argc, char const *argv[])
{
	int n;

	while (~scanf("%d", &n))
	{
		for (int i = 0; i < n; ++i)
		{
			scanf("%I64d", &t[i]);
		}
		sort(t, t+n);

		int cnt = 0;
		long long tt = 0;

		for (int i = 0; i < n; ++i)
		{
			if(tt <= t[i]) 
			{
				++cnt; 
				tt += t[i];
			}
		}
		cout << cnt << endl;
	}
	return 0;
}