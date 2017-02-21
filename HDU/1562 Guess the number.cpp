#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);

	while (t--)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		int x;
		for (x = 1000; x < 10000; ++x)
		{
			if (x % a == 0)
			{
				if ( (x + 1) % b == 0)
				{
					if ((x + 2) % c == 0) break;
				}

			}
		}
		if(x == 10000) printf("Impossible\n");
		else printf("%d\n", x);
	}
	return 0;
}