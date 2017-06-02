#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;
char s[16][105];
int pos[16][2];
int n, m, ans, h;
bool flag;

void dfs(int f, int dir, int v)
{
    if(h == f) 
    {
        v += pos[f][dir];
        ans = min(ans, v);
        return ;
    }
    dfs(f-1, (dir+1)&1, v+m+2);
    dfs(f-1, dir, v+pos[f][dir]*2+1);
}

int main(int argc, char const *argv[])
{
    while (~scanf("%d %d", &n, &m))
    {
        h = 1;
        flag = false;
        ans = INF;
        getchar();
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 0; j < m+2; ++j)
            {
                scanf("%c", &s[i][j]);
                if('1' == s[i][j]) flag = true;
            }
            getchar();
            for (int j = 1; j <= m; ++j)
            {
                if('1' == s[i][j]) pos[i][0] = j;
            }
            for (int j = m; j >= 1; --j)
            {
                if('1' == s[i][j]) pos[i][1] = m-j+1;
            }
            if(i==h && !pos[i][0])
            {
                ++h;
            }
        }
        if(flag)
        {
            dfs(n, 0, 0);
            printf("%d\n", ans);
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}