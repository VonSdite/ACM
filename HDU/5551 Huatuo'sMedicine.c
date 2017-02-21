#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n, t=1;
    scanf("%d",&n);
    while(n--)
    {
        int mm;
        scanf("%d",&mm);
        if(mm==0) printf("Case #%d: %d\n", t, 0);
        else printf("Case #%d: %d\n", t, 2*mm-1);
        t++;
    }
    return 0;
}