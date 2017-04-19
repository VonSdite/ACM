#include <bits/stdc++.h>

using namespace std;

const int SIZE = 105;
int a[SIZE]; 

int main()
{
	int n;
	scanf("%d", &n);
	for(int i =0; i<n; ++i)
	{
		scanf("%d", &a[i]);
	}
	int cnt = 0;
	for(int i=0; i<n; ++i)
	{
		for(int j=n-1;j >i; --j)
		{
			if(a[j] < a[j-1])
			{
				swap(a[j], a[j-1]);
				++cnt;
			}
		}
	}
	for(int i=0; i<n; ++i)
	{
		if(i!=n-1) printf("%d ", a[i]);
		else printf("%d\n", a[i]);
	}
	printf("%d\n", cnt);
	return 0;
}
