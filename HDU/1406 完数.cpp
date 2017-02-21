#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n1, n2;
		scanf("%d %d", &n1, &n2);

		int cnt = 0;

		if(n1 > n2) swap(n1, n2);
		
		for (int i = n1; i <= n2; ++i)
		{
			int tmp = 1;
			for (int j = 2; j < i; ++j)
			{
				if(i % j == 0)
				{
					tmp += j;
				}
			}
			if(tmp == i) ++cnt;
		}
		printf("%d\n", cnt);
	}
	return 0;
}