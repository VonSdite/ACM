#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

const int SIZE = 1000;
bool vis[SIZE];

int main(int argc, char const *argv[])
{
    int n;
    while (~scanf("%d", &n))
    {
        memset(vis, 0, sizeof(vis));
        int ans = 0;
        int tmp;
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &tmp);
            if (tmp && !vis[tmp])
            {
                ++ans;
                vis[tmp] = true;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}