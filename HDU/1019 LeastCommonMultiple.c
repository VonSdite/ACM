#include<stdio.h>
int find(int x, int y)
{
    int temp;
    int a=x, b=y;
    if(x<y)
    {
        temp=x;
        x=y;
        y=temp;
    }
    if(x%y==0) temp=y;
    else
    {
        while(x%y)
        {
            temp=x%y;
            x=y;
            y=temp;
        }
    }
    return a/temp*b;
}
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int nn, i, a[1000], c;
        scanf("%d", &nn);
        for(i=0;i<nn;i++) scanf("%d", &a[i]);
        if(nn>1) 
        {
            c=find(a[0],a[1]);
            for(i=2;i<nn;i++) c=find(c,a[i]);
            printf("%d\n", c);
        }
        else if(nn==1) printf("%d\n", a[0]);
    }
    return 0;
}