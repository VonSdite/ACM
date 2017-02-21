#include<stdio.h>  
#include<string.h>  
  
int main()  
{  
    double a[100010];  
    a[1] = 0.5;  
    int N;  
    for(int i = 2; i <= 100000; i++)  
        a[i] = a[i-1] + 1.0/i/2;  
    printf("# Cards  Overhang\n");  
    while(~scanf("%d",&N))  
    {  
        printf("%5d%10.3lf\n",N,a[N]);  
    }  
  
    return 0;  
}  