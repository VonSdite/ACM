#include <bits/stdc++.h>

using namespace std;

const int SIZE = 105;
int a[SIZE];

int main()
{
	int n;
	while (~scanf("%d", &n))
	{
		for(int i=0; i<n; ++i)
		{
			scanf("%d", &a[i]);
		}
		for(int i=0; i<n;++i)
			{
				printf("%d", a[i]);
				if(i!=n-1) printf(" ");
				else printf("\n");
			}
		for(int i=1;i<n; ++i)
		{
			int key=a[i];
			int j = i -1;
			while(j >=0 && a[j]>key)
			{
				a[j+1] = a[j];
				--j;
			}
			a[j+1] = key;
			for(int i=0; i<n;++i)
			{
				printf("%d", a[i]);
				if(i!=n-1) printf(" ");
				else printf("\n");
			}
		}
	}
	return 0;
}
