#include <iostream>

using namespace std;



int main(int argc, char const *argv[])
{
	int n;
	while (~scanf("%d", &n))
	{
		int x, y, z;
		int flag = 0;
		for (x=1; x <= 100; ++x)
		{
			for (y = x; y <= 100; ++y)
			{
				for (z = y; z <= 100; ++z)
				{
					if(x*x + y*y + z*z == n) 
					{
						++flag;
						break;
					}
				}
				if(flag) break;
			}
			if(flag) break;

		}
		printf("%d %d %d\n", x, y, z);
	}
	return 0;
}