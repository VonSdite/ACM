#include <stdio.h>
#include <string.h>
int main()
{
    int t,k;
    double x;
    char s[10];
    scanf("%d",&t);
    k=1;
    while(t--)
    {
        scanf("%lf%s",&x,s);
        printf("%d ",k++);
        if(strcmp(s,"kg")==0)
        printf("%.4lf lb",2.2046*x);
        if(strcmp(s,"lb")==0)
        printf("%.4lf kg",x*0.4536);
        if(strcmp(s,"g")==0)
        printf("%.4lf l",x*3.7854);
        if(strcmp(s,"l")==0)
        printf("%.4lf g",x*0.2642);
        printf("\n");
    }
    return 0;
}