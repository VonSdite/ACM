#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1005;
struct homework
{
    int d;
    int r;  
} h[SIZE];
int mark[SIZE];

bool cmp(const homework &a, const homework &b)
{
    if(a.r != b.r)
    {
        return a.r > b.r;
    }
    else
    {
        return a.d < b.d;
    }
}

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    int n;
    int sum;
    while (t--)
    {
        memset(mark, 0, sizeof(mark));
        memset(h, 0, sizeof(h));
        scanf("%d", &n);
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &h[i].d);
        }
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &h[i].r);
        }
        sort(h, h+n, cmp);

        sum = 0;
        for (int i = 0; i < n; ++i)
        {
            int j;
            for (j = h[i].d; j > 0; --j)
            {
                if(!mark[j])
                {
                    mark[j] = 1;
                    break;
                }
            }
            if(j == 0) sum += h[i].r;
        }
        printf("%d\n", sum);
    }
    return 0;
}