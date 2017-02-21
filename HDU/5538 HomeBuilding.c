#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int t, a[53][53];
    scanf("%d", &t);
    while(t--)
    {
        int n, m, i, j, count=0;
        memset(a,0,sizeof(a));
        scanf("%d %d", &n, &m);
        for(i=1;i<=n;i++) for(j=1;j<=m;j++) 
        {
            scanf("%d", &a[i][j]);
            if(a[i][j]) count++;
        }
        for(i=1;i<=n;i++) for(j=1;j<=m;j++)
        {
            count+=4*a[i][j];
            if(a[i-1][j]<=a[i][j]) count-=a[i-1][j];
            else count-=a[i][j];
            if(a[i+1][j]<=a[i][j]) count-=a[i+1][j];
            else count-=a[i][j];
            if(a[i][j+1]<=a[i][j]) count-=a[i][j+1];
            else count-=a[i][j];
            if(a[i][j-1]<=a[i][j]) count-=a[i][j-1];
            else count-=a[i][j];
        }
        printf("%d\n", count);
    }
    return 0;
}