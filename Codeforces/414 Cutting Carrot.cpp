#include <bits/stdc++.h>

using namespace std;

const double MAX = 1e7;

double s(double &t)
{
    double l = 0, r = MAX, mid;
    for (int i = 0; i < 10000; ++i)
    {
        mid = (r+l)/2;
        if(mid*mid > t) r = mid;
        else l = mid;
    }
    return mid;
}

int main(int argc, char const *argv[])
{
    double n, h;
    while (cin >> n >> h)
    {
        for (int i = 1; i < (int)n; ++i)
        {
            double tmp = (double)i*h*h/n;
            printf("%.12f ", s(tmp));
        }
        printf("\n");
    }
    return 0;
}