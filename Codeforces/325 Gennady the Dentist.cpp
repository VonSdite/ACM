#include <bits/stdc++.h>

using namespace std;

const int SIZE = 4e3+5;
int v[SIZE];
int d[SIZE];
int p[SIZE];
int a[SIZE];
int flag[SIZE];

int main(int argc, const char * argv[])
{
    int n;
    while (~scanf("%d", &n))
    {
        memset(flag, 0, sizeof(flag));
        for (int i = 1; i <= n; i++)
            scanf("%d %d %d", &v[i], &d[i], &p[i]);
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {

            if (p[i] < 0)
                continue;
            a[ans++] = i;
            int k = v[i];
            int t = 0;
            for (int j = i + 1; j <= n; j++)
            {
                flag[j] = 0;
                if (p[j] >= 0)
                {
                    flag[j] = 1;
                    if (k > 0)
                        p[j] -= k;
                    k--;
                }
            }

            for (int j = i + 1; j <= n; j++)
            {

                if (p[j] >= 0)
                    p[j] -= t;
                if (p[j] < 0 && flag[j])
                    t += d[j];
            }
        }
        printf("%d\n", ans);
        for (int i = 0; i < ans; i++)
        {
            printf("%d", a[i]);
            if(i != ans-1) printf(" ");
            else printf("\n");
        }
    }
    return 0;
}