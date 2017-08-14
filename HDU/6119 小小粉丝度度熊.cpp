#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5 + 5;
pair<long long, long long> mp[SIZE];
long long sum[SIZE];

int main(int argc, char const *argv[])
{
    int n, m;
    long long l, r;
    while (~scanf("%d %d", &n, &m))
    {
        for (int i = 0; i < n; ++i)
        {
            scanf("%I64d %I64d", &l, &r);
            mp[i] = make_pair(l, r);
        }
        sort(mp, mp + n);
        // for (int i = 0; i < n; ++i)
        // {
        //     printf("%I64d %I64d\n", mp[i].first, mp[i].second);
        // }

        int index = 0;
        for (int i = 0; i < n; ++i)
        { // 合并重叠区间
            int step = i+1;
            long long last = mp[i].second;
            while (step < n && mp[step].first <= last)
            {
                last = max(last, mp[step].second);
                ++step;
            }
            mp[index++] = make_pair(mp[i].first, last);
            i = step - 1;
        }

        sum[0] = 0;
        long long ans = m;
        for (int i = 1; i < index; ++i)
        {
            sum[i] = mp[i].first - mp[i-1].second - 1 + sum[i-1];
        }

        for (int l = 0, r = 0; l < index && r < index; ++l)
        {
            while (r < index && sum[r] - sum[l] <= m) ++r;
            long long x = m - (sum[r-1] - sum[l]);
            ans = max(ans, mp[r-1].second-mp[l].first + 1 + x);
        }
        printf("%I64d\n", ans);
    }
    return 0;
}