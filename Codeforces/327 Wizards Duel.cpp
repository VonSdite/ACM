#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    double l, p, q;
    while (~scanf("%lf", &l))
    {
        scanf("%lf %lf", &p, &q);
        double ans = l/(p+q) * p;
        printf("%.12f\n", ans);
    }
    return 0;
}