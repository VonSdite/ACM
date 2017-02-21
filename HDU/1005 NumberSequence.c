#include<stdio.h>
#include<string.h>
struct matrix
{
    long long a[2][2];
}res, origin;
struct matrix multiply(struct matrix x, struct matrix y)
{
    struct matrix temp;
    memset(temp.a,0,sizeof(temp.a));
    long long i, j, k;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                temp.a[i][j]+=(x.a[i][k]*y.a[k][j])%7;
            }
        }
    }
    return temp;
}
void calc(long long n)
{
    while(n)
    {
        if(n&1) res=multiply(res, origin);
        n>>=1;
        origin=multiply(origin, origin);
    }
    printf("%lld\n",(res.a[0][0]+res.a[0][1])%7);
   
}
int main(int argc, char const *argv[])
{
	int a, b, n;
	while(scanf("%d %d %d", &a, &b, &n)&&(a||b||n))
	{
		memset(res.a,0,sizeof(res.a));
        memset(origin.a,0,sizeof(origin.a));
        res.a[0][0]=res.a[1][1]=1;
        origin.a[0][0]=a;
        origin.a[0][1]=b;
        origin.a[1][0]=1;
        if(n>=3) calc(n-2);
        else if(n==2||n==1) printf("%d\n", 1);
	}
	return 0;
}