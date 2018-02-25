#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    long long n, a, b, k;

    while (~scanf("%I64d %I64d %I64d %I64d", &n, &k, &a, &b))
    {

        long long ans = 0;
        if (k != 1)
        {
            while (n != 1)
            {
                if (n % k)
                {
                    if (n > k)
                    {
                        long long tmp = n % k;
                        ans += tmp * a;
                        n -= tmp;
                    }
                    else
                    {
                        ans += (n-1) * a;
                        n = 1;
                    }
                }
                else 
                {
                    long long tmp = n / k;
                    if ((n - tmp) * a < b)
                    {
                        ans += (n - tmp) * a;
                    }
                    else
                    {
                        ans += b;
                    }
                    n = tmp;
                }
            }
        }
        else 
        {
            ans += (n-1) * a;
        }
        printf("%I64d\n", ans);
    }
    return 0;
}