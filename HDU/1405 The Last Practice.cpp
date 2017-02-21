#include <iostream>
#include <map>

using namespace std;

map<int, int> num;

int main(int argc, char const *argv[])
{
	int n;
	int cnt = 1;

	int prime[10000];

	int k = 0;

	for (int i = 2; i < 65536; ++i)
	{
		int j;
		for (j = 2; j * j <= i; ++j)
		{
			if(i % j == 0) break;
		}
		if(j * j > i) prime[k++] = i;
	}

	while (~scanf("%d", &n) && n > 0)
	{
		if(cnt != 1) printf("\n");

		num.clear();

		for (int i = 0; n != 1;)
		{
			if(n % prime[i] == 0)
			{
				n /= prime[i];

				++num[prime[i]];
			}
			else
			{
				++i;
			}
		}

		printf("Case %d.\n", cnt++);

		for(map<int, int>::iterator it = num.begin(); it != num.end(); ++it)
		{
			cout << it->first << " " << it->second << " ";
		}
		printf("\n");

	}
	return 0;
}