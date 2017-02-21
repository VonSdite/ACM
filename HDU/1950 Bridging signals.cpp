#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int num[50000];

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);

	while (t--)
	{
		int n;
		scanf("%d", &n);
		int tmp;
		int len = 1;
		int pos = 0;

		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &tmp);
			
			if(i == 0)
			{
				num[i] = tmp;
				continue;
			}

			if(tmp > num[len-1])
				num[len++] = tmp;
			else
			{
				pos = lower_bound(num, num + len, tmp) - num;
				num[pos] = tmp;
			}
		}
		printf("%d\n", len);


	}
	return 0;
}