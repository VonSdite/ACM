#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	string tmp;
	string flag = "CODEFORCES";
	while (cin >> tmp)
	{
		bool end = false;
		size_t len = tmp.length();
		string str1;
		for (size_t i = 0; i < len; ++i)
		{
			for (size_t j = i+1; j <= len; ++j)
			{
				str1 = tmp.substr(0, i) + tmp.substr(j);
				if(flag == str1)
				{
					printf("YES\n");
					end = true;
				}
				if(end) break;
			}
			if(end) break;	
		}
		if(!end) printf("NO\n");
	}
	return 0;
}