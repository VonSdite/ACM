#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0); cin.tie(0);
	string tmp;
	while(cin >> tmp)
	{
		size_t len = tmp.length();
		int cnt = 0;
		for (size_t i = 0; i < len/2; ++i)
		{
			if(tmp[i] != tmp[len-i-1]) ++cnt;
		}
		if(cnt == 1) printf("YES\n");
		else if (0 == cnt && len & 1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}