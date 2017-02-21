#include<stdio.h>
int main(int argc, char const *argv[])
{
    int tt, t=1, a[52], temp[52];
    scanf("%d", &tt);
    while(tt--)
    {
        int i, j;
        for (i=0;i<52;i++) scanf("%d", &a[i]);
        int n, l, r;
        scanf("%d %d %d", &n, &l, &r);
        printf("Case #%d: ", t);t++;
        n%=r;
        for(i=0;i<n;i++)
        {
            for(j=0;j<l-1;j++) temp[j]=a[j];
            for(j=0;j<r-l+1;j++) a[j]=a[l-1+j];
            for(;j<r;j++) a[j]=temp[j-r+l-1];
        }
        for(i=0;i<52;i++)
        { 
            printf("%d", a[i]);
            if(i!=51) printf(" ");
        }
        puts("");
    }
    return 0;
}