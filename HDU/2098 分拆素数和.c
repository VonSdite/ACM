#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n, l=0, a[10001]={0}, i, j;
	for(i=2;i<10001;i++)
	{
		for(j=2;j*j<=i;j++) if(i%j==0) break;
		if(j*j>i) a[i]=1;
	}
	while(~scanf("%d", &n)&&n&&l<500)
	{
		l++;
		int count=0;
		for(i=1;i<n/2;i++) if(a[i]&&a[n-i]) count++;
		printf("%d\n", count);
	}
	return 0;
}