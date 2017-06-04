#include <bits/stdc++.h>

using namespace std;

bool prime(int n)
{
    for (int i = 2; i*i <= n; ++i)
    {
        if(!(n%i)) return false;
    }    
    return true;
}

int main(int argc, char const *argv[])
{
    int n;
    while (~scanf("%d", &n))
    {
        if(prime(n))
        {
            printf("1\n");
            printf("%d\n", n);
        }
        //由于所有n都是奇数，如果是由两个素数组成
        //和必须为奇数，则需要奇数+偶数才行
        //而素数中只有2是唯一的偶数，
        //所以由两个数组成，必定一个是2，一个是n-2
        else if(prime(n-2))
        {
            printf("2\n");
            printf("2 %d\n", n-2);
        }
        else
        {
            printf("3\n");
            //从n往前找它的素数最快，且可以尽可能的减小n
            //让后面循环次数变少
            for (int i = n-1; i >= 0; --i)
            {
                if(prime(i))
                {
                    printf("%d ", i);
                    n -= i;
                    break;
                }
            }
            for (int i = 2; i <= n-2; ++i)
            {
                if(prime(i) && prime(n-i))
                {
                    printf("%d %d\n", i, n-i);
                    break;
                }
            }
            // else
            // {
            //     int tmp;
            //     for (int i = n-1; i >= 0; --i)
            //     {
            //         if(prime(i))
            //         {
            //             tmp = i;
            //             n -= i;
            //             break;
            //         }
            //     }
            //     if(prime(n))
            //     {
            //         printf("2\n");
            //         printf("%d %d\n", tmp, n);
            //     }
            //     else
            //     {
            //         printf("3\n");
            //         for (int i = 2; i <= n-2; ++i)
            //         {
            //             if(prime(i) && prime(n-i))
            //             {
            //                 printf("%d %d %d\n", tmp, i, n-i);
            //                 break;
            //             }
            //         }
            //     }
            // }
        }
    }
    return 0;
}