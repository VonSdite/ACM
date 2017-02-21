#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	while (~scanf("%d", &n) && n)
	{
		int tmp;
		int ans = 0;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &tmp);
			ans ^= tmp;
		}
		printf("%d\n", ans);
	}
	return 0;
}