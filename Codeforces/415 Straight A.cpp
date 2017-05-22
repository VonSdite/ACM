#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    // freopen("1input.txt", "r", stdin);
    int n, k, cnt;
    double sum, tmp;
    while (~scanf("%d %d", &n, &k))
    {
        sum = 0;
        for (int i = 0; i < n; ++i)
        {
            scanf("%lf", &tmp);
            sum += tmp;
        }
        cnt = 0;
        while(round(sum/n) < k)
        {
            sum += k;
            ++n;
            ++cnt;
        }
        printf("%d\n", cnt);
    }
    return 0;
}