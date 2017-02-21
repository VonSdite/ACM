#include <iostream>
#include <algorithm>

using namespace std;

#define M(a, b, c, d) min(min(a, b), min(c, d))

int a[5850];

int main(int argc, char const *argv[])
{
	int n = 1;
	a[n] = 1;
	int p1 = 1, p2 = 1, p3 = 1, p4 = 1;
	for (int i = 1; i < 5850; ++i)
	{
		a[++n] = M(2 * a[p1], 3 * a[p2], 5 * a[p3], 7 * a[p4]);

		if (a[n] == 2 * a[p1]) ++p1;
		if (a[n] == 3 * a[p2]) ++p2;
		if (a[n] == 5 * a[p3]) ++p3;
		if (a[n] == 7 * a[p4]) ++p4;
	}

	while (~scanf("%d", &n) && n)
	{
		if (n % 10 == 1 && n % 100 != 11)
			printf("The %dst humble number is ", n);
		else if (n % 10 == 2 && n % 100 != 12)
			printf("The %dnd humble number is ", n);
		else if (n % 10 == 3 && n % 100 != 13)
			printf("The %drd humble number is ", n);
		else
			printf("The %dth humble number is ", n);

		printf("%d.\n", a[n]);
	}
	return 0;
}