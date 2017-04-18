#include <iostream>

using namespace std;

const int SIZE = 2e5+5;
int a[SIZE];

int main(int argc, char const *argv[])
{
	int n;
	while(~scanf("%d", &n))
	{
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &a[i]);
		}
		int minv = a[0];
		int maxv = -1e9-5;
		for (int i = 1; i < n; ++i)
		{
			maxv = max(maxv, a[i]-minv);
			minv = min(minv, a[i]);
		}
		printf("%d\n", maxv);
	}
	return 0;
}