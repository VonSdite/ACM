#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	while(~scanf("%d", &n) && n)
	{
		int a, b, c, d, a1, a2, a3;
		a = b = c = a1 = a2 = a3 = 0;
		d = 1;
		for (int i = 1; i < n; ++i)
		{
			d += a3;
			a = d;
			b = a1;
			c = a2;
			a3 = c;
			a2 = b;
			a1 = a;
		}
		printf("%d\n", a + b + c + d);
	}
	return 0;
}