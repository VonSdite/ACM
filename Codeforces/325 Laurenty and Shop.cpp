#include <bits/stdc++.h>

using namespace std;

const int SIZE = 55;
const int INF = 1e9+5;
int a[3][SIZE];
int b[SIZE];

int main(int argc, char const *argv[])
{
    int n, a1, a2, tmp, v;
    while (~scanf("%d", &n))
    {
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        for (int i = 1; i <= 2; ++i)
        {
            for (int j = 1; j <= n-1; ++j)
            {
                scanf("%d", &a[i][j]);
            }
        }
        for (int i = 1; i <= n; ++i)
        {
            scanf("%d", &b[i]);
        }
        a1 = INF;
        v = n;
        for (int j = n; j >= 1; --j)
        {
            tmp = b[j];
            int k;
            for (k = n; k > j; --k)
            {
                tmp += a[2][k-1];
            }
            for (;k>=2; --k)
            {
                tmp += a[1][k-1];
            }
            if(tmp < a1)
            {
                a1 = tmp;
                v = j;
            }
        }
        a2 = INF;
        for (int j = n; j >= 1; --j)
        {
            tmp = b[j];
            int k;
            for (k = n; k > j; --k)
            {
                tmp += a[2][k-1];
            }
            for (;k>=2; --k)
            {
                tmp += a[1][k-1];
            }
            if(tmp < a2 && j != v)
            {
                a2 = tmp;
            }
        }
        printf("%d\n", a1+a2);
    }
    return 0;
}