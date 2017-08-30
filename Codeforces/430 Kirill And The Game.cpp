#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    long long l, r, x, y, k;
    while (~scanf("%I64d %I64d %I64d %I64d %I64d", &l, &r, &x, &y, &k))
    {
        int i;
        for (i = x; i <= y; ++i)
        {
            if (k*i >= l && k *i <= r) break;
        }
        if (i <= y) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}