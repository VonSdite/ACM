#include <bits/stdc++.h>

using namespace std;

const int SIZE = 2e5+5;
double a[SIZE];

int main(int argc, char const *argv[])
{
    int n;
    double ans, w;
    while (~scanf("%d %lf", &n, &w))
    {
        n *= 2;
        for (int i = 0; i < n; ++i)
        {
            scanf("%lf", &a[i]);
        }
        sort(a, a+n);
        ans = min(a[0], a[n/2]/2);
        n /= 2;
        ans = ans*n+2*ans*n;
        ans = min(ans, w);
        printf("%f\n", ans);
    }
    return 0;
}