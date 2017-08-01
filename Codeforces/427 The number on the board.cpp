#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string n;
    int k;
    while (~scanf("%d", &k))
    {
        cin >> n;
        int len = (int)n.length();
        int cnt = 0;
        for (int i = 0; i < len; ++i)
        {
            cnt += (n[i] - '0');
        }
        if (cnt >= k) printf("0\n");
        else
        {
            sort(n.begin(), n.end());
            int tmp = k - cnt;
            int i = 0;
            int ans = 0;
            while (i < len && tmp > 0)
            {
                tmp -= (9 - n[i] + '0');
                ++i;
                ++ans;
            }
            printf("%d\n", ans);
        }
    }
    return 0;
}