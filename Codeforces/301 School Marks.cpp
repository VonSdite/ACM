#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, k, p, x, y;
	cin >> n >> k >> p >> x >> y;

	int cny1 = 0, cny2 = 0;

	int sum = 0;
	for (int i = 0; i < k; ++i)
	{
		int tmp;
		scanf("%d", &tmp);
		if(tmp < y) ++cny1;
		else ++cny2;
		sum += tmp;
	}

	int rest = n - k;
	int mid = (n+1)/2;
	if(mid > cny2)
	{
		int tmp = mid-cny2;
		if(tmp > rest)
		{
			printf("-1\n");
			return 0;
		}
		sum += tmp*y;
		rest -= tmp;
	}
	sum += rest;
	if(sum > x)
	{
		printf("-1\n");
	}
	else
	{
		int tmp = mid - cny2;
		for (int i = 0; i < tmp; ++i)
		{
			printf("%d ", y);
		}
		for (int i = 0; i < rest; ++i)
		{
			printf("1 ");
		}
	}

	return 0;
}