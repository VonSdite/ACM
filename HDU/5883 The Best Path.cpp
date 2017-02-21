#include <map>
#include <cmath>
#include <queue>
#include <vector>
#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
int indeg[100001];
int a[100001], s[1000001], t[1000001];
int main()
{
    int T;
    scanf("%d", &T);
    while (T > 0)
    {
        T--;
        int n, m;
        scanf("%d%d", &n, &m);
        int i, j;
        for (i = 1; i <= n; i++)
            scanf("%d", &a[i]);
        memset(indeg, 0, sizeof(indeg));
        for (i = 1; i <= m; i++)
        {
            scanf("%d%d", &s[i], &t[i]);
            indeg[s[i]]++;
            indeg[t[i]]++;
        }
        int sum = 0;
        for (i = 1; i <= n; i++)
            sum += indeg[i] % 2;
        if (sum > 2 || sum == 1)
            printf("Impossible\n");
        else
        {
            if (sum == 0)
            {
                int ans = 0;
                for (i = 1; i <= n; i++)
                {
                    for (j = 1; j <= indeg[i] / 2; j++)
                        ans ^= a[i];
                }
                int maxx = 0;
                for (i = 1; i <= n; i++)
                    maxx = max(maxx, (ans ^ a[i]));
                printf("%d\n", maxx);
            }
            else
            {
                int ans = 0;
                for (i = 1; i <= n; i++)
                {
                    if (indeg[i] % 2 == 0)
                    {
                        for (j = 1; j <= indeg[i] / 2; j++)
                            ans ^= a[i];
                    }
                    else
                    {
                        for (j = 1; j <= indeg[i] / 2 + 1; j++)
                            ans ^= a[i];
                    }
                }
                printf("%d\n", ans);
            }
        }
    }
    return 0;
}