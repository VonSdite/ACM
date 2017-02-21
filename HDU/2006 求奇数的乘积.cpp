#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	while (~scanf("%d", &n))
	{
		int tmp;
		int sum = 1;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &tmp);

			if(tmp%2) sum*=tmp;
		}
		printf("%d\n", sum);
	}
	return 0;
}