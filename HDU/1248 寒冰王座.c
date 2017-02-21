#include<stdio.h>
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int i, j, k, min=10000;
		for(i=n/150;i>=0;i--)
			for(j=0;j<=(n-150*i)/200;j++)
				for(k=0;k<=(n-150*i-200*j)/350;k++)
					if(n-350*k-200*j-150*i<min) min=n-350*k-200*j-150*i;
		printf("%d\n", min);
	}
	return 0;
}