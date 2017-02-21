#include<stdio.h>
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if(c%2) printf("Impossible\n");
		else
		{
			int k=0, i, j;
			c/=2;
			if(a>b)
			{
				int temp=a;
				a=b;
				b=temp;
				k=1;
			}
			for(i=c/b;i>=0;i--)
			{
				for(j=0;j<=c/a;j++)
				{
					if(i*b+j*a==c) break;
				}
				if(i*b+j*a==c) break;
			}
			if(i==-1) printf("Impossible\n");
			else
			{
				if(k==0) printf("%d %d\n", 2*j, 2*i);
				else if(k==1) printf("%d %d\n", 2*i, 2*j);
			}
		}
	}
	return 0;
}