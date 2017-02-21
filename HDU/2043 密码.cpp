#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int m;
	cin >> m;
	while (m--)
	{
		string password;
		cin >> password;
		if(password.length() >= 8 && password.length() <= 16)
		{
			int cnt = 0;
			int flag1 = 1, flag2 = 1, flag3 =1, flag4 = 1;

			for(auto i : password)
			{
				if(flag1 && i >='a' && i <= 'z')
				{
					flag1 = 0;
					++cnt;
				}
				if(flag2 && i >= 'A' && i <= 'Z')
				{
					flag2 = 0;
					++cnt;
				}
				if(flag3 && i >= '0' && i<='9')
				{
					flag3 = 0;
					++cnt;
				}
				if(flag4 && (i == '~' || i == '!' || i == '@' || i == '#' || i == '$' || i == '%' || i == '^'))
				{
					flag4 = 0;
					++cnt;
				}
			}
			if(cnt >= 3) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}