#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int m, k;
	while (~scanf("%d %d", &m, &k) && (m || k))
	{
		for (int i = 1; i <= m; ++i)
		{
			if(i % k == 0) ++m;
		}
		printf("%d\n", m);
	}
	return 0;
}