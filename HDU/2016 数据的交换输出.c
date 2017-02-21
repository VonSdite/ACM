#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n, a[100];
	while(~scanf("%d", &n)&&n)
	{
		int i;
		for(i=0;i<n;i++) scanf("%d", &a[i]);
		int min=a[0], k=0;
		for(i=1;i<n;i++)
		{
			if(min>a[i]) 
			{
				min=a[i];k=i;
			}
		}
		int temp=a[0];
		a[0]=min;
		a[k]=temp;
		for(i=0;i<n;i++)
		{
			printf("%d", a[i]);
			if(i!=n-1) printf(" ");
			else puts("");
		}
	}
	return 0;
}