#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, x;
	while (~scanf("%d %d", &n, &x))
	{

		n %= 6;
		for (int i = n; i > 0; --i)
		{
			if(i&1)
			{
				switch(x)
				{
					case 0:
						x = 1;
						break;
					case 1:
						x = 0;
						break;
				}
			}
			else
			{
				switch(x)
				{
					case 1:
						x = 2;
						break;
					case 2:
						x = 1;
						break;
				}
			}
		}
		printf("%d\n", x);
	}
	return 0;
}