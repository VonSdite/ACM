#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>

using namespace std;

bool apear[300];
int num[30];

int main(int argc, char const *argv[])
{
	while(true)
	{		
		memset(apear, 0, sizeof(apear));
		int over = 0;
		int cnt = 0;
		while(~scanf("%d", &num[cnt]) && num[cnt])
		{
			if(num[cnt] == -1)
			{
				over = 1;
				break;
			}
			++apear[2*num[cnt]];
			++cnt;
		}

		if(over) break;

		int res = 0;
		for (int i = 0; i < cnt; ++i)
		{
			if(apear[num[i]]) ++res;
		}

		printf("%d\n", res);
	}
	return 0;
}