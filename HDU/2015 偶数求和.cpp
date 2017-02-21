#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	double n, m;
	while(~scanf("%lf %lf", &n, &m))
	{
		int cnt = (int)(n / m);
		int k = 2;
		double sum1;
		for (int i = 0; i < cnt; ++i)
		{
			sum1 = 0;
			for (int i = 0; i < m; ++i)
			{
				sum1 += k;
				k += 2;
			}
			if(i == 0)
				printf("%.f", sum1 / m);
			else 
				printf(" %.f", sum1 / m);
		}

		int cnt1 = (int)n % (int)m;
		if(cnt1)
		{
			sum1 = 0;
			for (int i = 0; i < cnt1; ++i)
			{
				sum1 += k;
				k += 2;
			}
			printf(" %.f", sum1 / cnt1);
		}
		puts("");
	}
	return 0;
}