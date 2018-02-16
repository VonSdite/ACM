#include <bits/stdc++.h>

using namespace std;

const int SIZE = 5e5 + 5;
int ans[3];
char c[SIZE];
int a[SIZE];
int n;

int main(int argc, char const *argv[])
{
    while (~scanf("%d", &n))
    {
        for (int i = 0; i < n; ++i)
        {
            getchar();
            scanf("%c", &c[i]);
            scanf("%d", &a[i]);
        }
        memset(ans, 0, sizeof(ans));
        for (int i = 0; i < 10; ++i)
        {
            int d0 = 0, d1 = 1;
            int P = 1 << i;
            for (int i = 0; i < n; ++i)
            {
                int k = a[i] & P;
                if (k) k = 1;
                if (c[i] == '&')
                {
                    d0 &= k;
                    d1 &= k;
                }
                else if (c[i] == '|')
                {
                    d0 |= k;
                    d1 |= k;
                }
                else
                {
                    d0 ^= k;
                    d1 ^= k;
                }
            }

            if ((d0 == 0) && (d1 == 0));
            else if ((d0 == 0) && (d1 == 1))
            {
                ans[0] += P;
            }
            else if ((d0 == 1) && (d1 == 0))
            {
                ans[0] += P;
                ans[1] += P;
            }
            else
            {
                ans[0] += P;
                ans[2] += P;
            }
        }
        printf("3\n& %d\n^ %d\n| %d\n", ans[0], ans[1], ans[2]);
    }
    return 0;
}

