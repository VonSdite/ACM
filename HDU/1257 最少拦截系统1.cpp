#include <iostream>
#include <algorithm>

using namespace std;

int dp[50000];

int main(int argc, char const *argv[])
{
    int n;
    while (~scanf("%d", &n))
    {
        int tmp;
        int len = 1;

        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &tmp);
            if(i == 0)
            {
                dp[i] = tmp;
                continue;
            }

            if(tmp > dp[len -1])
            {
                dp[len++] = tmp;
            }
            else
            {
                int pos = lower_bound(dp, dp+len, tmp) - dp;
                dp[pos] = tmp;
            }
        }
        printf("%d\n", len);
    }
    return 0;
}