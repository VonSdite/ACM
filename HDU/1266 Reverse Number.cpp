#include <iostream>
#include <iterator>
#include <algorithm>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		string tmp;
		cin >> tmp;

		int flag = 0;
		if(tmp[0] == '-') 
		{
			++flag;
			cout << "-";
		}
		int begin = tmp.length()-1;
		int cnt = 0;
		while(tmp[begin] == '0') 
		{
			++cnt;
			--begin;
		}
		for (int i = begin; i >= flag; --i)
		{
			if(tmp[i] != '-') cout << tmp[i];
		}
		cout << string(cnt, '0') << endl;
	}
	return 0;
}