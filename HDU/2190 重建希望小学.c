#include<stdio.h>
int main(int argc, char const *argv[])
{
    int nn;
    scanf("%d", &nn);
    while(nn--)
    {
        int n, a=1, b=3;
        scanf("%d", &n);
        if(n==1) printf("%d\n", a);
        else if(n==2) printf("%d\n", b);
        else if(n>2)
        {
            int i, c;
            for(i=3;i<=n;i++)
            {
                c=b+2*a;
                a=b;
                b=c;
            }
            printf("%d\n", c);
        } 
    }
    return 0;
}