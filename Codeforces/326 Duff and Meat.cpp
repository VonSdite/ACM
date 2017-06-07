#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5+5;
int a[SIZE];
int p[SIZE];

int main(int argc, char const *argv[])
{
    int n, pmin, sum;
    while (~scanf("%d", &n))
    {
        for (int i = 0; i < n; ++i)
        {
            scanf("%d %d", &a[i], &p[i]);
            if(i)
            {   
                if(pmin < p[i]) p[i] = pmin;
                else pmin = p[i];
            }
            else pmin = p[i];
        }
        sum = 0;
        for (int i = 0; i < n; ++i)
        {
            sum += p[i]*a[i];
        }
        printf("%d\n", sum);
    }
    return 0;
}