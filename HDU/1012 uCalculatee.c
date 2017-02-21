#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    printf("n e\n- -----------\n");
    for(i=0;i<=9;i++)
    {
        double  a=2, sum=1;
        double e=2;
        printf("%d ",i);
        while(a<=i) 
        {
            sum*=a;
            e+=1/sum;
            a++;
        }
        if(i==0) printf("%d\n", 1);
        else if(i==1) printf("%d\n", 2);
        else if(i==2) printf("%.1f\n", e);
        else printf("%.9f\n", e);
    }
    return 0;
}