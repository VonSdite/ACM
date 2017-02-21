#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

bool not_huiwen(char* num)
{
	int len = strlen(num)-1;
	int cn = (len + 1)/2;
	for (int i = 0; i < cn; ++i)
	{
		if(num[i] != num[len-i]) return true;
	}
	return false;
}

void deal(char* num)
{
	int real[10000];
	int flag = 0;
	unsigned int len = strlen(num);
	for (unsigned int i = 0; i < len; ++i)
	{
		real[i] = num[i] + num[len-1-i] - 2*'0';
	}
	for (int i = len-1; i >= 0; --i)
	{
		if(real[i] > 9 && i-1>=0) 
		{
			real[i] -= 10;
			++real[i-1];
		}
		if(i == 0 && real[i] > 9)
		{
			real[i] -= 10;
			num[0] = '1';
			++flag;
		}
	}
	for (unsigned int i = 0; i < len; ++i)
	{
		num[i+flag] = real[i] + '0';
	}
}

int main(int argc, char const *argv[])
{
	char num[10000];
	while (cin >> num)
	{
		int cnt = 0;
		vector<string> res;
		res.push_back(num);
		while(not_huiwen(num))
		{
			++cnt;
			deal(num);
			res.push_back(num);
		}
		printf("%d\n", cnt);
		for (int i = 0; i <= cnt; ++i)
		{
			if(i) cout << "--->";
			cout << res[i];
		}
		cout << endl;
		memset(num, 0, sizeof(num));
	}
	return 0;
}