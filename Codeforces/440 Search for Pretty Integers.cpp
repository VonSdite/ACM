#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e2;

int a[SIZE];
int b[SIZE];

int main(int argc, char const *argv[])
{
    int n, m;
    while (~scanf("%d %d", &n, &m))
    {
        int t1 = 1e5;
        int t2 = 1e5;
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
            t1 = min(t1, a[i]);
        }
        for (int i = 0; i < m; ++i)
        {
            scanf("%d", &b[i]);
            t2 = min(t2, b[i]);
        }

        bool flag = false;
        int t3 = 1e5;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (a[i] == b[j])
                {
                    t3 = min(a[i], t3);
                    flag = true;
                }
            }
        }

        if (flag) printf("%d\n", t3);
        else printf("%d\n", min(t1, t2) * 10 + max(t1, t2));
    }
    return 0;
}