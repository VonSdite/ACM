#include "stdio.h"
#include "string.h"
#include "stdlib.h"
int pow1(int x)
{
	int a=1;
	while(x--)
	{
		a*=10;
	}
	return a;
}
int cmp(const void *a, const void *b)
{
	return *(int*)a-*(int*)b;
}
int main(int argc, char const *argv[])
{
	char num[2000];
	int a[2000], i, j, k, count;
	memset(num,0,2000*sizeof(char));
	while(gets(num)!=NULL)
	{
		memset(a,0,2000*sizeof(int));
		for(i=0, j=0, k=0, count=0;num[i]!='\0';i++)
		{
			if(num[i]=='5'||num[i+1]=='\0')
			{
				if(i!=j||(num[i+1]=='\0'&&num[i]!='5'))
				{
					if(num[i+1]=='\0'&&num[i]!='5') i++;
					for(;j<i;j++) 
					{
						a[k]+=pow1(i-j-1)*(num[j]-'0');
					}
					k++;
					count++;
				}
				j++;
			}
		}
		qsort(a,count,sizeof(int),cmp);
		for(k=0;k<count;k++)
		{
			printf("%d", a[k]);
			if(k!=count-1) printf(" ");
			else puts("");
		}
		memset(num,0,2000*sizeof(char));
	}
	return 0;
}