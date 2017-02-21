#include "stdio.h"
#include "stdbool.h"
#include "string.h"

char a[100005];
bool b[26];

int main(int argc, char const *argv[])
{
	int n, i;
	while(~scanf("%d", &n))
	{
		if(n>26) 
		{
			getchar();
			gets(a);
			printf("-1\n");
		}
		else 
		{
			int sum=0;
			memset(b,0,sizeof(b));
			getchar();
			for(i=0;i<n;i++)
			{
				scanf("%c", &a[i]);
				if(b[a[i]-'a']==0) 
				{
					b[a[i]-'a']++;
				}
				else 
				{
					sum++;
				}
			}
			printf("%d\n", sum);
		}
	}
	return 0;
}