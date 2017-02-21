#include<stdio.h>
int main()
{
    int x , y, temp, sum1, sum2;
    while(scanf("%d %d", &x, &y) != EOF)
    {
        sum1 = 0;
        sum2 = 0;
        if(x > y)
        {
            temp = x;
            x = y;
            y = temp;
        }
        for(; x <= y; x++)
        {
            if( x % 2 == 0)
            {
                sum1 += x * x;
            }
            else
                sum2 += x * x * x;
        }
    printf("%d %d\n", sum1, sum2);       
    }
    return 0;
}