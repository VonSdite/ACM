#include <bits/stdc++.h>

using namespace std;

int main()
{
	int w, m;
	while(~scanf("%d %d", &w, &m))
	{
		while (m)
		{
			if(!((m-1)%w)) m--;
			else if(!((m+1)%w)) m++;
			else if(m%w)
			{
				printf("NO\n");
				break;
			}
			m /= w;
		}
		if(!m) printf("YES\n");
	}
	return 0;
}