#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MOD = 1e9 + 7;

int main()
{
    int n, ans, cnt;
    string str;
    while (cin >> str)
    {
        ans = cnt = 0;
        for (int i = str.size() - 1; i > -1; i--)
        {
            if (str[i] == 'b')
            {
                cnt++;
                cnt %= MOD;
            }
            else
            {
                ans += cnt;
                ans %= MOD;
                cnt *= 2;
                cnt %= MOD;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}