#include<stdio.h>
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int c, count=0;
		scanf("%d", &c);
		while(c)
		{
			if(c%2!=0) count++;
			c/=2;
		}
		printf("%d\n", count);
	}
	return 0;
}