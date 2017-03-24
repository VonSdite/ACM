#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

map<int, bool> record;

int main(int argc, char const *argv[])
{
	int n, m;
	while(~scanf("%d %d", &n, &m))
	{
		int k;
		int tmp;
		bool ans = false;
		for (int i = 0; i < m; ++i)
		{
			scanf("%d", &k);
			record.clear();
			bool flag = true;
			for (int j = 0; j < k; ++j)
			{
				scanf("%d", &tmp);
				if(record[-tmp])
				{
					flag = false;
				}
				++record[tmp];
			}
			if(flag) ans=true;
		}
		if(ans) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}