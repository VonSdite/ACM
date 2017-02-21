#include<stdio.h>
int main(void)
{
    int a, b, c, i;
    int j[10000]={0};
    scanf("%d", &c);
    for(i=0;i<c;i++)
    {
        scanf("%d %d", &a, &b);
        j[i]=a+b;
    }
    for(i=0;i<c;i++)
    {
        printf("%d\n", j[i]);
    }
    return 0;
}