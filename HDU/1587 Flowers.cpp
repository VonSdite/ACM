#include <iostream>
#include <limits>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, m;
	while (~scanf("%d %d", &n, &m))
	{
		int min = numeric_limits<int>::max();
		int tmp;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &tmp);
			if(tmp < min) min = tmp;
		}
		printf("%d\n", m / min);
	}
	return 0;
}