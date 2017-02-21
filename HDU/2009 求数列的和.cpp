#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	double n, m;
	while (~scanf("%lf %lf", &n, &m))
	{
		double sum = n;
		for (int i = 1; i < m; ++i)
		{
			n = sqrt(n);
			sum += n;
		}
		printf("%.2f\n", sum);
	}
	return 0;
}