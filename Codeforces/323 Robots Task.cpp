#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1005;
int a[SIZE];
int v[SIZE];

int main(int argc, char const *argv[])
{
    int n;
    while (~scanf("%d", &n))
    {
        memset(v, 0, sizeof(v));
        memset(a, 0, sizeof(a));
        int cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
        }
        int k = 0;
        int dir = 1;
        int i = 0;
        while (k != n)
        {
            // printf("%d\n", a[i]);
            if(!v[i] && a[i]<=k)
            {
                ++k;
                v[i] = 1;
            }
            i += dir;
            if(i == n)
            {
                if(k != n) ++cnt;
                i = n-1;
                dir = -1;
            }
            else if(i == -1)
            {
                if(k != n) ++cnt;
                i = 0;
                dir = 1;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}