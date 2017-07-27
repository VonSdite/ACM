#include <iostream>
#include <cstring>

using namespace std;

const int SIZE = 2e5+5;
char t[SIZE];
char p[SIZE];
int vis[SIZE];

bool check(int mid)
{
    int i = 1, j = 1;
    for (; t[i] && p[j]; ++i)
    {
        if(vis[i] <= mid) continue;
        if(t[i] == p[j]) ++j;
    }
    if(p[j] == '\0') return true;
    else return false;
}

int main(int argc, char const *argv[])
{
    while (~scanf("%s", t+1))
    {
        int n = strlen(t+1);
        int tmp;
        scanf("%s", p+1);

        for (int i = 1; i <= n; ++i)
        {
            scanf("%d", &tmp);
            vis[tmp] = i;
        }

        int l = 1, r = n;
        while (l <= r)
        {
            int mid = (l+r) / 2;
            if(check(mid)) l = mid + 1;
            else r = mid - 1;
        }
        printf("%d\n", l-1);
    }
    return 0;
}