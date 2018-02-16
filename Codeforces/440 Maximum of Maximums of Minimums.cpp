#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5 + 5;
int a[SIZE];
int pre[SIZE];
int last[SIZE];

int main(int argc, char const *argv[])
{
    int n, k;
    while (~scanf("%d %d", &n, &k))
    {
        int MIN = 1e9 + 5;
        int MAX = -1e9 - 5;
        int pos = 0;

        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
            MIN = min(MIN, a[i]);
            if (a[i] > MAX)
            {
                MAX = a[i];
                pos = i;
            }
        }

        if (k >= 3)
        {
            printf("%d\n", MAX);
        }
        else if (k == 2)
        {
            if (pos == n - 1 || pos == 0)
            {
                printf("%d\n", MAX);
            }
            else
            {
                for (int i = 0; i < n; ++i)
                {
                    pre[i] = i ? min(pre[i - 1], a[i]) : a[i];
                }
                for (int i = n - 1; i >= 0; --i)
                {
                    last[i] = (i == n - 1) ? a[i] : min(last[i + 1], a[i]);
                }
                int res = -1e9 - 5;
                for (int i = 0; i < n; ++i)
                {
                    res = max(res, max(pre[i], last[i]));
                }
                printf("%d\n", res);
            }
        }
        else
        {
            printf("%d\n", MIN);
        }
    }
    return 0;
}