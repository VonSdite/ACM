#include<stdio.h>
int main(int argc, char const *argv[])
{
	int k;
	while(scanf("%d", &k)!=EOF&&k)
	{
		int m=1, i, a, b=0;
		for(i=0;i<k;)
		{
			a=(m+b-1)%(2*k-i);
			b=a;
			i++;
			if(a<k)
			{
				m++;i=0;b=0;
			}
		}
		printf("%d\n", m);
	}
	return 0;
}