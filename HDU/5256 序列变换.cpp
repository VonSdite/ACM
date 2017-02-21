#include <iostream>
#include <algorithm>

using namespace std;

int dp[100010];

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);

    int c = 0;

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int tmp;
        int len = 1;

        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &tmp);

            tmp -= i;

            if(i == 0)
            {
                dp[i] = tmp;
                continue;
            }

            if(tmp >= dp[len - 1])
            {
                dp[len++] = tmp;
            }
            else
            {
                int pos = upper_bound(dp, dp+len, tmp) - dp;
                dp[pos] = tmp;
            }

        }
        printf("Case #%d:\n", ++c);
        printf("%d\n", n - len);
    }
    return 0;
}