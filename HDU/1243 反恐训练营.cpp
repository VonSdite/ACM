#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <map>

using namespace std;
int ans[2005][2005];

int main(int argc, char const *argv[])
{
	int n;
	while (~scanf("%d", &n))
	{
		string tm1;
		int tm2;
		map<char, int> score;

		cin >> tm1;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &tm2);
			score[tm1[i]] = tm2;
		}
		
		string zidan, kongbu;
		cin >> zidan >> kongbu;

		memset(ans, 0, sizeof(ans));

		int a_len = zidan.length();
		int b_len = kongbu.length();
		for (int i = 1; i <= a_len; ++i)
		{
			for (int j = 1; j <= b_len; ++j)
			{
				if(zidan[i-1] == kongbu[j-1])
				{
					ans[i][j] = ans[i-1][j-1] + score[kongbu[j-1]];
				}
				else
				{
					ans[i][j] = max(ans[i-1][j], ans[i][j-1]);
				}
			}
		}
		printf("%d\n", ans[a_len][b_len]);
	}
	return 0;
}