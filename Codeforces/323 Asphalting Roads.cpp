#include <bits/stdc++.h>

using namespace std;

int h[60];
int v[60];
std::vector<int> day;

int main(int argc, char const *argv[])
{
    int n, a, b;
    while (~scanf("%d", &n))
    {
        day.clear();
        memset(h, 0, sizeof(h));
        memset(v, 0, sizeof(v));
        n *= n;
        for (int i = 1; i <= n; ++i)
        {
            scanf("%d %d", &a, &b);
            if(!h[a] && !v[b])
            {
                h[a] = 1;
                v[b] = 1;
                day.push_back(i);
            }
        }
        for (auto w : day)
        {
            printf("%d ", w);
        }
        printf("\n");
    }
    return 0;
}