#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	while (~scanf("%d", &n) && n)
	{
		int sum_zero = 0, sum_pos = 0, sum_neg = 0;

		double tmp;

		for (int i = 0; i < n; ++i)
		{
			scanf("%lf", &tmp);
			if(tmp < 0) ++sum_neg;
			else if(tmp == 0) ++sum_zero;
			else if(tmp > 0) ++sum_pos;
		}
		printf("%d %d %d\n", sum_neg, sum_zero, sum_pos);
	}
	return 0;
}