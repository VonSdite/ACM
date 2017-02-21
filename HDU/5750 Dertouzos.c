#include "stdio.h"
#include "string.h"
#include "stdbool.h"
int a[100000];
bool b[1000005];
int k=0;
void Prime()//找质数的方法
{
    int i, j;
    memset(b,0,sizeof(b));
    for(i=2;i<=1000000;i++)
        if(!b[i])
        {
            a[k++]=i;
            for(j=i+i;j<=1000000;j+=i)
                b[j]++;
        }
}

int main(int argc, char const *argv[])
{
    Prime();
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, d, i, sum=0;
        scanf("%d %d", &n, &d);
        for(i=0;i<k;i++)
        {
        	if(a[i]*d>=n) break;
        	sum++;
        	if(d%a[i]==0) break;
        }
        printf("%d\n", sum);
    }
    return 0;
}