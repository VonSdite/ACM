#include <bits/stdc++.h>

using namespace std;

long long a[100005];
long long b[100005];
long long c[100005];

int main(int argc, char const *argv[])
{
	int n;
	while (~scanf("%d", &n))
	{
		memset(a, 0 , sizeof(a));
		memset(b, 0 , sizeof(b));
		b[0] = 0;
		c[0] = 0;
		int k = 1;
		for (int i = 0; i < n; ++i)
		{
			scanf("%I64d", &a[i]);
			if(i)
			{
				if(k & 1)
				{
					b[k] = abs(a[i]-a[i-1]);
					c[k] = -b[k];
				}
				else
				{
					b[k] = -1 * abs(a[i]-a[i-1]);
					c[k] = -b[k];
				}
				++k;
			}
		}
		
		long long a1 = b[1], a2 = c[1];
		for(int i = 1; i < k; i++) 
		{
		    b[i] += b[i - 1];
		    if(b[i] - b[0] > a1)
		        a1 = b[i] - b[0];
		    if(b[i] < b[0])
		        b[0] = b[i];
		}
		for(int i = 1; i < k; i++) 
		{
		    c[i] += c[i - 1];
		    if(c[i] - c[0] > a2)
		        a2 = c[i] - c[0];
		    if(c[i] < c[0])
		        c[0] = c[i];
		}
		long long ans = max(a1, a2);
		printf("%I64d\n", ans);
	}
	return 0;
}