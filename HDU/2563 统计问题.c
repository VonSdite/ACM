/*
 要分两种情况来考虑，a(n)为向上，b(n)为向左跟向右，f(n)为当前方案数。 
 a(n) = a(n-1) + b(n-1) = f(n-1) ; 
 b(n) = a(n-1) * 2 + b(n-1);
 这两个公式你可以想得出来的。
 f(n)=a(n)+b(n)=3*a(n-1)+2*b(n-1)=2*f(n-1)+a(n-1)=2*f(n-1)+f(n-2);
 */
#include<stdio.h>
int main(int argc, char const *argv[])
{
	int c;
	scanf("%d", &c);
	while(c--)
	{
		int n, i, a=3, b=7, c;
		scanf("%d", &n);
		for(i=3;i<=n;i++)
		{
			c=b;
			b=2*b+a;
			a=c;
		}
		if(n==1) printf("%d\n", a);
		else if(n>1) printf("%d\n", b);
	}
	return 0;
}