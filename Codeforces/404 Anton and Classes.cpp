#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 1e9+5;

struct node
{
	int l;
	int r;
};

int main(int argc, char const *argv[])
{
	int n, m;
	while(~scanf("%d", &n))
	{
		int dis=0;
		int c_min = MAX;
		int c_max = 0;
		int p_min = MAX;
		int p_max = 0;

		node chess[n];
		for (int i = 0; i < n; ++i)
		{
			scanf("%d %d", &chess[i].l, &chess[i].r);
			if(chess[i].l > c_max) c_max = chess[i].l;
			if(chess[i].r < c_min) c_min = chess[i].r;
		}

		scanf("%d", &m);
		node program[m];
		for (int i = 0; i < m; ++i)
		{
			scanf("%d %d", &program[i].l, &program[i].r);
			if(program[i].l > p_max) p_max = program[i].l;
			if(program[i].r < p_min) p_min = program[i].r;
		}

		dis = max(max(p_max-c_min, c_max-p_min), dis);

		printf("%d\n", dis);
	}
	return 0;
}