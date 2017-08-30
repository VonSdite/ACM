#include <bits/stdc++.h>

using namespace std;

// const int SIZE = 1e5+5;
// pair<int, int> pos[SIZE];

int main(int argc, char const *argv[])
{
    int d, r;
    int n, ans;
    double x, y, sr;
    while (~scanf("%d %d", &r, &d))
    {
        ans = 0;
        scanf("%d", &n);

        int mainpart = (r-d);

        for (int i = 0; i < n; ++i)
        {
            scanf("%lf %lf %lf", &x, &y, &sr);
            // pos[i] = make_pair(x, y);
            double tmp = sqrt(x*x+y*y);
            double minr = tmp - sr;
            double maxr = tmp + sr; 
            if(minr >= mainpart && maxr <= r)
            {
                ++ans;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}