#include<stdio.h>
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int i, j;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				if(i==j||j==n-i-1) 
				{
					putchar('X');
					if((j==n-i-1&&j>=i)||(j==i&&i>n-i-1))
					{
						puts("");break;
					}
				}
				else putchar(' ');
				if(j==n-1) puts("");
			}
		puts("");
	}
	return 0;
}