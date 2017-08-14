#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5 + 5;
vector<int> g[maxn];

double dfs(int v = 0, int p = -1)
{
    double sum = 0;
    for (auto u : g[v])
        if (u != p)
            sum += dfs(u, v) + 1;
    return sum ? sum / (g[v].size() - (p != -1)) : 0;
}

int main(int argc, char const *argv[])
{
    int n;
    int x, y;
    while (~scanf("%d", &n))
    {
        for (int i = 0; i < n; ++i)
        {
            g[i].clear();
        }
        for (int i = 0; i < n-1; ++i)
        {
            scanf("%d %d", &x, &y);
            --x;
            --y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        printf("%.15f\n", dfs());
    }
    return 0;
}
