//双向LIS， 翻转了一次
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

#define NUM 205

int dp[NUM];

int LCIS(int *arr1, int *arr2, int n)
{
    memset(dp, 0, sizeof(dp));

    int ans = 0;
    int maxlen;


    for (int i = 0; i < n; ++i)
    {
        maxlen = 0;
        for (int j = 0; j < n - i; ++j)
        {
            if(arr1[i] > arr2[j]) maxlen = max(maxlen, dp[j]);
            else if(arr1[i] == arr2[j])
            {
                dp[j] = maxlen + 1;
            }

            if(j != n-i-1) ans = max(ans, dp[j] * 2);
            else ans = max(ans, dp[j]*2 - 1); 
        }
    }

    return ans;
}

int a[205];
int b[205];

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
            b[n - i - 1] = a[i];
        }
        printf("%d\n", LCIS(a, b, n));
    }
    return 0;
}
