#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int a;
	while (~scanf("%d", &a) && a)
	{
		int tmp = 1;
		while ((tmp & a)== 0)
		{
			tmp <<= 1;
		}
		printf("%d\n", tmp & a);
	}
	return 0;
}