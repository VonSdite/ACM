#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	string s, t;
	while(cin >> s >> t)
	{
		size_t len = s.length();
		string ans;

		int cnt = 0;
		for (size_t i = 0; i < len; ++i)
		{
			cnt ^= (s[i]-'0') ^ (t[i]-'0');
			if(cnt) ans.push_back(t[i]);
			else ans.push_back(s[i]);
		}
		if(cnt) printf("impossible\n");
		else cout << ans << endl;
	}
	return 0;
}