#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e6 + 20;
const int MOD = 1e9 + 7;
int gg[SIZE];
long long cnt[SIZE];
char s1[SIZE], s2[SIZE];
long long ans;
int t;

int main(int argc, char const *argv[])
{
    scanf("%d", &t);

    while (t--)
    {
        memset(gg, 0, sizeof(gg));
        memset(cnt, 0, sizeof(cnt));

        scanf("%s", s1 + 1);
        scanf("%s", s2 + 1);

        int n = strlen(s1 + 1);
        int m = strlen(s2 + 1);

        reverse(s1 + 1, s1 + n + 1);
        reverse(s2 + 1, s2 + m + 1);

        for (int i = 2; i <= m; ++i)
        {
            int tmp = gg[i - 1];
            while (tmp && s2[tmp + 1] != s2[i]) tmp = gg[tmp];
            if (s2[tmp + 1] == s2[i]) gg[i] = tmp + 1;
            else gg[i] = 0;
        }

        int tmp = 0;
        for (int i = 1; i <= n; ++i)
        {
            while (tmp && s2[tmp + 1] != s1[i]) tmp = gg[tmp];
            if (s2[tmp + 1] == s1[i]) ++tmp;
            if (tmp) ++cnt[tmp];
        }

        for (int i = m; i > 0; --i)
        {
            if (gg[i]) cnt[gg[i]] += cnt[i];
        }

        ans = 0;
        for (long long i = 1; i <= m; ++i)
        {
            ans = (ans + i * cnt[i]) % MOD;
        }
        printf("%I64d\n", ans);
    }
    return 0;
}