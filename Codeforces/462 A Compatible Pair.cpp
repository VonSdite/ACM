#include <bits/stdc++.h>

using namespace std;

const long long SIZE = 100;
const long long MIN = -1e18-5;
const long long MAX = -MIN;

long long t[SIZE];
long long b[SIZE];
long long ans[SIZE*SIZE];

int main(int argc, char const *argv[])
{
    int n, m;
    while (~scanf("%d %d", &n, &m))
    {
        for (int i = 0; i < n; ++i)
        {
            scanf("%I64d", &t[i]);
        }

        for (int i = 0; i < m; ++i)
        {
            scanf("%I64d", &b[i]);
        }

        int k = 0;
        for (int i = 0; i < n; ++i)
        {
            ans[k] = MIN;
            for (int l = 0; l < n; ++l)
            {
                if (i == l) continue;
                for (int j = 0; j < m; ++j)
                {
                    ans[k] = max(t[l] * b[j], ans[k]);
                }
            }
            ++k;
        }

        long long res = MAX;
        for (int i = 0; i < k; ++i)
        {
            res = min(res, ans[i]);
        }
        
        printf("%I64d\n", res);
    }
    return 0;
}