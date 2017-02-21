#include "stdio.h"
#include<string.h>
int main(int argc, char const *argv[])
{
	double std[50][5], ave[50], cou[5];
	int n, m;
	while(scanf("%d %d", &n, &m)!=EOF)
	{
		int i, j;
		memset(ave,0,sizeof(ave));
		memset(cou,0,sizeof(cou));
		for(i=0;i<n;i++)
			for(j=0;j<m;j++) 
				{
					scanf("%lf",&std[i][j]);
					ave[i]+=std[i][j];
					if(j==m-1) ave[i]/=m;
				}
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			{
				cou[i]+=std[j][i];
				if(j==n-1) cou[i]/=n;
			}
		int sum=0, k=0;
		for(i=0;i<n;i++) 
			for(j=0, k=0;j<m;j++)
			{
				if(std[i][j]>=cou[j]) k++;
				if(k==m) sum++;
			}
		for(i=0;i<n;i++) 
		{
			printf("%.2f", ave[i]);
			if(i!=n-1) printf(" ");
			else puts("");
		}
		for(i=0;i<m;i++)
		{
			printf("%.2f", cou[i]);
			if(i!=m-1) printf(" ");
			else puts("");
		}
		printf("%d\n\n", sum);
	} 
	return 0;
}