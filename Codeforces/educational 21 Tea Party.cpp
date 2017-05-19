#include <bits/stdc++.h>

using namespace std;

const int SIZE = 105;
int a[SIZE];
struct Node
{
    int e;
    int id;
}p[SIZE];


bool cmp(const Node &a, const Node &b)
{
    return a.e>b.e;
}

int main(int argc, char const *argv[])
{
    int n, w;
    // freopen("1input.txt", "r", stdin);
    while (~scanf("%d %d", &n, &w))
    {
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &p[i].e);
            p[i].id = i;
            a[i] = (p[i].e+1)/2;
            w -= a[i];
        }
        if(w < 0) printf("-1\n");
        else
        {
            sort(p, p+n, cmp);
            while (w)
            {
                for (int i = 0; i < n; ++i)
                {
                    if(a[p[i].id]==p[i].e) continue;
                    ++a[p[i].id];
                    --w;
                    if(0==w) break;
                }
            }
            for (int i = 0; i < n; ++i)
            {
                printf("%d", a[i]);
                if(i==n-1) printf("\n");
                else printf(" ");
            }
        }
    }
    return 0;
}