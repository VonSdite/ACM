#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e4+5;
int p[SIZE];

int main(int argc, char const *argv[])
{
    int n, m, x, l, r, ll, rr;
    while (~scanf("%d %d", &n, &m))
    {
        for (int i = 1; i <= n; ++i)
        {
            scanf("%d", &p[i]);
        }
        for (int i = 0; i < m; ++i)
        {
            scanf("%d %d %d", &l, &r, &x);
            if(x>=l && x<= r)
            {
                ll = rr = 0;
                for (int i = l; i <= r; ++i)
                {
                    if(x > i)
                    {
                        if(p[i] > p[x]) ++ll;
                    }
                    else if(x < i)
                    {
                        if(p[i] < p[x]) ++rr;
                    }
                }
                if(ll == rr) printf("Yes\n");
                else printf("No\n");
            }
            else printf("Yes\n");
        }
    }
    return 0;
}