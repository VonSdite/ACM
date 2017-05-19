#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    // freopen("1input.txt", "r", stdin);
    int n, k, m, tmp, cnt;
    while (~scanf("%d %d", &n, &k))
    {
        cnt = 0;
        for (int i = 0; i < k; i++)
        {
            scanf("%d", &m);
            for (int j = 1; j <= m; j++)
            {
                scanf("%d", &tmp);
                if (tmp == j)
                {
                    cnt++;
                }
            }
        }
        printf("%d\n", 2*(n-cnt)+1-k);
    }
    return 0;
}