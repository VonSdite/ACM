#include <iostream>

using namespace std;

long long AB(int n, int m)
{
	long long ans = 1;
	for (int i = 0; i < m; ++i)
	{
		ans *= (n - i);
	}
	return ans;
}

void BC(int n, int m)
{
	printf("%I64d\n", AB(n, m) / AB(m, m));
}

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		char control;
		getchar();
		control = getchar();
		int n, m;
		scanf("%d %d", &n, &m);
		switch(control)
		{
			case 'A': printf("%I64d\n", AB(n, m));break;
			case 'C': BC(n, m);break;
		}
	}
	return 0;
}