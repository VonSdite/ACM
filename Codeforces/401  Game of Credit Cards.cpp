#include <iostream>
#include <cstring>

using namespace std;

char a[1005], b[1005];

int m[100], s[100];

int main(int argc, char const *argv[])
{
	int n;
	while (~scanf("%d", &n))
	{
		scanf("%s", a);
		scanf("%s", b);
		int cnt = 0;
		int c = n;

		memset(m, 0, sizeof(0));
		memset(s, 0, sizeof(0));
		for (int i = 0; i < n; ++i)
		{
			++m[b[i]];
			++s[b[i]];
		}

		for (int i = 0; i < n; ++i)
		{
			for (int j = 1; j < 10; ++j)
			{
				if(m[a[i]+j])
				{
					++cnt;
					--m[a[i]+j];
					break;
				}
			}
		}
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < 10; ++j)
			{
				if(s[a[i]+j])
				{
					--c;
					--s[a[i]+j];
					break;
				}
			}
		}
		printf("%d\n", c);
		printf("%d\n", cnt);
	}
	return 0;
}