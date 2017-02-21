#include<stdio.h>
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int a=1, b=2;
		if(n==1) printf("%d\n", a);
		else if(n==2) printf("%d\n", b);
		else
		{
			int i, c;
			for(i=3;i<=n;i++)
			{
				c=b;
				b+=a;
				a=c;
			}
			printf("%d\n", b);
		}
	}
	return 0;
}