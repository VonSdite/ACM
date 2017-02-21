#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	

	int n;
	while (~scanf("%d", &n))
	{
		string origin;
		string ans;

		cin >> origin >> ans;

		int cnt = 0;

		for (int i = 0; i < n; ++i)
		{
			int max1 = max(ans[i]-'0', origin[i]-'0');
			int min1 = min(ans[i]-'0', origin[i]-'0');
			cnt += min(max1-min1, 9-max1+min1+1);
		}

		cout << cnt << endl;
	}
	return 0;
}