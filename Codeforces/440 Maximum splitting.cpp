#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

int main(int argc, char const *argv[])
{
    int q;
    int n;
    while (~scanf("%d", &q))
    {
        for (int cas = 1; cas <= q; cas++)
        {
            scanf("%d", &n);
            int num = n % 4;
            int res = n / 4;
            if (num == 0)
            {
                printf("%d\n", res);
            } 
            else if (num == 1)
            {
                if (res < 2)
                {
                    printf("-1\n");
                } 
                else
                {
                    printf("%d\n", res-1);
                }
            } 
            else if (num == 2)
            {
                if (res < 1)
                {
                    printf("-1\n");
                } 
                else
                {
                    printf("%d\n", res);
                }
            } 
            else if (num == 3)
            {
                if (res < 3)
                {
                    printf("-1\n");
                } 
                else
                {
                    printf("%d\n", res-1);
                }
            }
        }
    }
    return 0;
}
