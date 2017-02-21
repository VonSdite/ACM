#include "stdio.h"
#include "string.h"
typedef struct matrix
{
	int a[2][2];
}mat_t;
mat_t res, origin;
mat_t multiply(mat_t x, mat_t y, int m)
{
	mat_t temp;
	memset(temp.a,0,sizeof(temp.a));
	int i, j, k;
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
			for(k=0;k<2;k++)
				temp.a[i][j]+=((x.a[i][k]%m)*(y.a[k][j]%m))%m;
	return temp;
}
int calc(int n, int m)
{
	while(n)
	{
		if(n&1) res=multiply(res,origin,m);
		n>>=1;
		origin=multiply(origin,origin,m);
	}
	return (res.a[0][0]+res.a[0][1])%m;
}
int main(int argc, char const *argv[])
{
	int k, b, n, m, i, sum;
	while(~scanf("%d %d %d %d", &k, &b, &n, &m))
	{
		for(i=0, sum=0;i<n;i++)
		{
			memset(res.a,0,sizeof(res.a));
			memset(origin.a,0,sizeof(origin.a));
			res.a[0][0]=res.a[1][1]=origin.a[0][0]=origin.a[0][1]=origin.a[1][0]=1;
			if(k*i+b>=3) sum+=calc(k*i+b-2,m);
			else if(k*i+b==1||k*i+b==2) sum++;
			sum%=m;
		}
		printf("%d\n", sum);
	}
	return 0;
}