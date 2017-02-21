#include <iostream>

using namespace std;

int candy[1000001];

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);

	while (t--)
	{
		int n;
		scanf("%d", &n);
		int max = 0;
		long long sum = 0;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &candy[i]);
			if(candy[i] > max) max = candy[i];
			sum += candy[i];
		}
		sum -= max;
		if(max > sum + 1) printf("No\n");
		else printf("Yes\n");
	}
	return 0;
}