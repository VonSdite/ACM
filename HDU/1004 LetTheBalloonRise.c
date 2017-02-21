#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(int argc, char const *argv[])
{
	int n;
	while(scanf("%d", &n), n)
	{
		getchar();
		char a[1000][15];
		int i, j, count[1000];
		bool record[1000]={0};
		for(i=0;i<1000;i++) count[i]=1;
		for(i=0;i<n;i++) gets(a[i]);
		for(i=0;i<n;i++)
		{
			for(j=1+i;j<n;j++)
			{
				if(strcmp(a[i],a[j])==0&&record[i]==0) 
				{
					count[i]++;
					record[j]=1;
				}
			}
		}
		int temp=0;
		for(i=1;i<n;i++)
		{
			if(count[temp]<count[i])
			{
				temp=i;
			}
		}
		puts(a[temp]);
	}
	return 0;
}