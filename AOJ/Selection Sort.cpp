#include <bits/stdc++.h>

using namespace std;

const int SIZE = 105;
int a[SIZE];

int main()
{
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; ++i)
	{
		scanf("%d", &a[i]);
	}
	int cnt = 0;
	for(int i = 0; i<n; ++i)
	{
		int mini = a[i];
		int m = i;
		for(int j = i+1; j <n;++j)
		{
			if(a[j] < mini)
			{
				 mini = a[j];
				 m = j;
			}
		}
		if(i != m)
		{
			swap(a[i], a[m]);
			++cnt;
		}
	}
	for (int i =0; i<n; ++i)
	{
		printf("%d", a[i]);
		if(i != n-1) printf(" ");
		else printf("\n");
	}
	printf("%d\n", cnt);
	return 0;
}
