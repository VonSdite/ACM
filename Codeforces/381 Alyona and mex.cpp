#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e9;

int main(int argc, char const *argv[])
{
    int n, m, l, r, mex;
    while (~scanf("%d %d", &n, &m))
    {
        mex = MAX;
        for (int i = 0; i < m; ++i)
        {
            scanf("%d %d", &l, &r);
            mex = min(mex, r-l+1);
        }
        printf("%d\n", mex);
        for (int i = 0; i < n; ++i)
        {
            printf("%d", i%mex);
            if(i != n-1) printf(" ");
            else printf("\n");
        }
    }
    return 0;
}