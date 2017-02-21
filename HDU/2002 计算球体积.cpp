#include <iostream>

#define PI 3.1415927

using namespace std;

int main(int argc, char const *argv[])
{
	double r;
	while (~scanf("%lf", &r))
	{
		printf("%.3f\n", 4./3*PI*r*r*r);
	}
	return 0;
}