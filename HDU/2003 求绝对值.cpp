#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	double n;
	while (~scanf("%lf", &n))
	{
		printf("%.2f\n", fabs(n));
	}
	return 0;
}