#include <bits/stdc++.h>

using namespace std;

const int SIZE = 4005;
const int MAX = 2e9;
bool t[SIZE][SIZE];
int dgree[SIZE];

int main(int argc, char const *argv[])
{
    int n, m;
    int a, b;
    int result;
    while (~scanf("%d %d", &n, &m))
    {
        result = MAX;
        for (int i = 0; i < m; ++i)
        {
            scanf("%d %d", &a, &b);
            t[a][b] = t[b][a] = true;
            ++dgree[a];
            ++dgree[b];
        }

        for (int i = 1; i <= n; ++i)
        {
            for (int j = i+1; j <= n; ++j)
            {
                if(t[i][j])
                {
                    for (int k = j+1; k <= n; ++k)
                    {
                        if(t[i][k] && t[j][k]) result = min(result, dgree[i]+dgree[j]+dgree[k]);
                    }
                }
            }
        }
        if(result == MAX) printf("-1\n");
        else printf("%d\n", result-6);
    }
    return 0;
}