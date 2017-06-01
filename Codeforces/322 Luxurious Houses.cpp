#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5+5;
int h[SIZE];
int m[SIZE];
int v[SIZE];

int main(int argc, char const *argv[])
{
    int n;
    while (~scanf("%d", &n))
    {
        memset(v, 0, sizeof(v));
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &h[i]);
        }
        m[n-1] = h[n-1];
        for (int i = n-2; i >= 0; --i)
        {
            if(m[i+1]>=h[i])
            {
                m[i] = m[i+1];
                v[i] = 1;
            }
            else
            {
                m[i] = h[i];
            }
        }
        for (int i = 0; i < n; ++i)
        {
            printf("%d", m[i]-h[i]+v[i]);
            if(i != n-1) printf(" ");
            else printf("\n");
        }
    }
    return 0;
}