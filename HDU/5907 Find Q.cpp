#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);

	while (t--)
	{
		string tmp;
		cin >> tmp;
		size_t len = tmp.length();

		long long cnt = 0;
		long long ans = 0;

		for (size_t i = 0; i < len; ++i)
		{
			if(tmp[i] == 'q')
			{
				++cnt;
				ans += cnt;
			}
			else cnt = 0;
		}

		printf("%I64d\n", ans);
	}
	return 0;
}