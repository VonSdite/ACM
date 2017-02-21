#include<stdio.h>
int main()
{
    int m, n, k1, k2, k3, count;
    while(scanf("%d %d", &m, &n) != EOF)
    {
        for(count = 0; m <= n; ++m)
        {
            k1 = m / 100;
            k2 = (m - 100 * k1) / 10;
            k3 = (m -100 * k1 -10 * k2);
            if(m == k1*k1*k1 + k2*k2*k2 + k3*k3*k3)
            {
                if(count != 0)
                {
                    printf(" ");
                }
                printf("%d", m);
                count++;
            }
        }
        if(count == 0)
            printf("no\n");        
        else
            printf("\n");       
    }
    return 0;
}