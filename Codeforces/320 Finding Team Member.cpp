#include <bits/stdc++.h>

using namespace std;

const int SIZE = 4e5;
struct man
{
    int stre;
    pair<int, int> x;
}people[SIZE];
bool vis[1000];
int ans[1000];

bool cmp(const man &a, const man &b)
{
    return a.stre > b.stre;
}

int main(int argc, char const *argv[])
{
    int n, nn, k;
    while(~scanf("%d", &n))
    {
        nn = 2*n;
        k = 0;
        memset(people, 0, sizeof(people));
        memset(vis, 0, sizeof(vis));
        memset(ans, 0, sizeof(ans));
        for (int i = 2; i <= nn; ++i)
        {
            for (int j = 1; j < i; ++j)
            {
                scanf("%d", &people[k].stre);
                people[k].x = make_pair(i, j);
                ++k;
            }

        }
        sort(people, people+k, cmp);
        for (int i = 0; i < k; ++i)
        {
            int t1 = people[i].x.first;
            int t2 = people[i].x.second;

            if(!vis[t1] && !vis[t2])
            {
                ans[t1] = t2;
                ans[t2] = t1;
                vis[t1] = true;
                vis[t2] = true;
            }
        }
        for (int i = 1; i <= nn; ++i)
        {
            printf("%d", ans[i]);
            if(i != nn) printf(" ");
            else printf("\n");
        }
    }
    return 0;
}