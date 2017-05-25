#include <bits/stdc++.h>

using namespace std;

int a[105];
int b[105];

int main(int argc, char const *argv[])
{
    int tmp, max;
    int n, m;
    while (~scanf("%d %d", &n, &m))
    {
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        for (int i = 1; i <= m; ++i)
        {
            max = -1;
            for (int j = 1; j <= n; ++j)
            {
                scanf("%d", &tmp);
                if(tmp > max)
                {
                    max = tmp;
                    a[i] = j;
                }
            }
        }
        for (int i = 1; i <= m; ++i)
        {
            ++b[a[i]];
        }
        int ans = 1;
        tmp = -1;
        for (int i = 1; i <= n; ++i)
        {
            if(b[i] > tmp)
            {
                tmp = b[i];
                ans = i;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}