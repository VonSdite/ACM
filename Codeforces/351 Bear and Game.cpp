#include <stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i;
		int arry[100];
		arry[0]=0;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&arry[i]);
		}
		int num=0;
		for(i=1;i<=n;i++)
		{
			if(arry[i]-arry[i-1]>15)
			{
				num=i-1;
				break;
			}
		}
		if(arry[i-1]+15>90)
			printf("90\n");
		else 
			printf("%d\n",arry[i-1]+15);
	}
	return 0;
}