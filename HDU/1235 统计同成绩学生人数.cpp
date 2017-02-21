#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int score[1005];

int main(int argc, char const *argv[])
{
	int n;
	while (~scanf("%d", &n) && n)
	{
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &score[i]);
		}

		int tmp;
		scanf("%d", &tmp);
		int cnt = 0;

		for (int i = 0; i < n; ++i)
		{
			if(tmp == score[i]) ++cnt;
		}

		printf("%d\n", cnt);
	}
	return 0;
}
