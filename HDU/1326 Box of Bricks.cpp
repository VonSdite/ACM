#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int stack[1000];

int main(int argc, char const *argv[])
{
	int n;
	int cnt = 0;
	while (~scanf("%d", &n) && n)
	{
		++cnt;
		int sum = 0;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &stack[i]);
			sum += stack[i];
		}
		sum /= n;
		int times = 0;
		for (int i = 0; i < n; ++i)
		{
			if(stack[i] < sum) times += sum - stack[i];
		}
		printf("Set #%d\n", cnt);
		printf("The minimum number of moves is %d.\n\n", times);
	}
	return 0;
}