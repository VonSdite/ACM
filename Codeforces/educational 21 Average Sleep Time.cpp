#include <bits/stdc++.h>

using namespace std;

const int SIZE = 2e5+5;
double a[SIZE];

int main()
{
    int n, k;
    double res;
    // freopen("input.txt", "r", stdin);
    while(~scanf("%d %d", &n, &k))
    {
        memset(a, 0, sizeof(a));
        for(int i=1; i<=n; i++)
        {
            scanf("%lf", &a[i]);
            a[i] += a[i-1];
        }
        res=0;
        for(int i=k; i<=n; i++)
        {
            res += a[i] - a[i-k];
        }
        printf("%.12f\n", res/(n-k+1));
    }
    return 0;
}