#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int m;
	scanf("%d", &m);
	while (m--)
	{
		int n;
		scanf("%d", &n);
		double sum = 0;
		for (int i = 1; i <= n; ++i)
		{
			sum += ((i%2)? 1./i : -1./i);
		}
		printf("%.2f\n", sum);
	}
	return 0;
}