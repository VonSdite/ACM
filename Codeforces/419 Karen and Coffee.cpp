#include <bits/stdc++.h>

using namespace std;

const int SIZE = 2e5+5;

int s[SIZE], ss[SIZE];

int main(int argc, char const *argv[])
{
    int n, k, q;
    int l, r;
    while (~scanf("%d %d %d", &n, &k, &q))
    {
        memset(s, 0, sizeof(s));
        memset(ss, 0, sizeof(ss));
        for (int i = 0; i < n; ++i)
        {
            scanf("%d %d", &l, &r);
            ++s[l];
            --s[r+1];
        }
        for (int i = 1; i < SIZE; ++i)
        {
            s[i] += s[i-1];
            ss[i] = ss[i-1];
            if(s[i] >= k)
                ++ss[i];
        }
        for (int i = 0; i < q; ++i)
        {
            scanf("%d %d", &l, &r);
            printf("%d\n", ss[r]-ss[l-1]);
        }
    }
    return 0;
}