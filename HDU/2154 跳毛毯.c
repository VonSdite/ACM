#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	while(~scanf("%d", &n)&&n)
	{
		int i, a=0, b=2, c=0;
		for(i=3;i<=n;i++)
		{
			c=(2*a+b)%10000;
			a=b;
			b=c;
		}
		if(n==1) printf("0\n");
		else if(n==2) printf("2\n");
		else printf("%d\n", c);
	}
	return 0;
}