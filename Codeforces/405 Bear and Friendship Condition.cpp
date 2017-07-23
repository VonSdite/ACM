#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

const int SIZE = 1.5e5+5;
std::vector<int> edges[SIZE];
bool vis[SIZE];

void dfs(int node, long long &cntVertices, long long &cntEdges)
{
    ++vis[node];
    ++cntVertices;
    cntEdges += edges[node].size();

    for (auto w : edges[node])
    {
        if(!vis[w]) dfs(w, cntVertices, cntEdges);
    }
}

int main(int argc, char const *argv[])
{
    int n, m;
    scanf("%d %d", &n, &m);

    int e1, e2;
    while (m--)
    {
        scanf("%d %d", &e1, &e2);
        edges[e1].push_back(e2);
        edges[e2].push_back(e1);
    }

    memset(vis, 0, sizeof(vis));
    for (int i = 1; i <= n; ++i)
    {
        if(!vis[i])
        {
            long long cntVertices = 0, cntEdges = 0;
            dfs(i, cntVertices, cntEdges);
            if((cntVertices-1)*cntVertices != cntEdges)
            {
                puts("NO");
                return 0;
            }
        }
    }

    puts("YES");

    return 0;
}