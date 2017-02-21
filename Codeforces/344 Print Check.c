#include "stdio.h"
#include "stdlib.h"

typedef struct operate
{
	int k1;
	int k2;
	int k3;
}k_t;

int main(int argc, char const *argv[])
{
	int n, m, k, i, j, **a;
	k_t *kk;
	while(~scanf("%d %d %d", &n, &m, &k))
	{
		a=(int**)malloc(n*sizeof(int*));
		for(i=0;i<n;i++) *(a+i)=(int*)malloc(m*sizeof(int));
		kk=(k_t*)malloc(k*sizeof(k_t));
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++) 
			{
				a[i][j]=0;
			}
		}
		for(j=0;j<k;j++)
		{
			scanf("%d %d %d", &kk[j].k1, &kk[j].k2, &kk[j].k3);
			switch(kk[j].k1)
			{
				case 1:
						for(i=0;i<m;i++) a[kk[j].k2-1][i]=kk[j].k3;
							break;
				case 2:
						for(i=0;i<n;i++) a[i][kk[j].k2-1]=kk[j].k3;
							break;
			}
		}
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
			{
				printf("%d", a[i][j]);
				if(j!=m-1) printf(" ");
				else puts("");
			}
	}
	return 0;
}