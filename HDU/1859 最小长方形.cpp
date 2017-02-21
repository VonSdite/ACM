#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, m;
	int cnt = 2;
	int x1 = 1000, y1 = 1000, x2 = -1000, y2 = -1000;
	while(~scanf("%d %d", &n, &m))
	{
		if(n == 0 && m == 0) 
		{
			--cnt;
			if(cnt == 0) break;
			printf("%d %d %d %d\n", x1, y1, x2, y2);
			x1 = 1000, y1 = 1000, x2 = -1000, y2 = -1000;
			continue;
		}
		else cnt = 2;

		if(x1 > n) x1 = n;
		if(x2 < n) x2 = n;
		if(y1 > m) y1 = m;
		if(y2 < m) y2 = m;

	}
	return 0;
}