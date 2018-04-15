#include <bits/stdc++.h>

using namespace std;

long long k, d, t, r;

bool check(double mid)
{
    long long tmp = floor(mid) / r;
    return (2 * k * tmp + (r - k) * tmp + 2 * min(mid - r * tmp, 1.0 * k) + max(mid - tmp * r - k, 0.0) >= 2 * t);
}

int main(int argc, char const *argv[])
{
    while (~scanf("%I64d %I64d %I64d", &k, &d, &t))
    {
        r = k / d + (k % d ? 1 : 0);
        r *= d;
        
        double left = t, right = 2 * t, ans;
        for (int i = 1; i <= 10000; ++i) 
        {
            double mid = (right + left) / 2;
            if (check(mid)) 
            {
                ans = mid;
                right = mid;
            }
            else 
            {
                left = mid;
            }
        }
        printf("%.10f\n", ans);
    }
    return 0;

}