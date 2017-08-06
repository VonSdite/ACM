#include <bits/stdc++.h>

using namespace std;

const int SIZE = 105;
char flag[SIZE][SIZE];
int n, m;

bool judge_hang()
{
    int color[200];
    memset(color, 0, sizeof(color));

    int t1 = n / 3, t2 = n * 2 / 3, t3 = n;

    char tmpColor = flag[0][0];
    color[(int)tmpColor] = 1;
    for (int i = 0; i < t1; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if(flag[i][j] != tmpColor)
            {
                return false;
            }
        }
    }

    tmpColor = flag[t1][0];
    if(color[(int)tmpColor]) return false;
    else
    {
        color[(int)tmpColor] = 1;
        for (int i = t1; i < t2; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if(flag[i][j] != tmpColor)
                {
                    return false;
                }
            }
        }
    }
    
    tmpColor = flag[t2][0];
    if(color[(int)tmpColor]) return false;
    else
    {
        for (int i = t2; i < t3; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if(flag[i][j] != tmpColor)
                {
                    return false;
                }
            }
        }
    }
    return true;
}

bool judge_lie()
{
    int color[200];
    int t1 = m / 3, t2 = m * 2 / 3, t3 = m;
    memset(color, 0, sizeof(color));

    char tmpColor = flag[0][0];
    color[(int)tmpColor] = 1;
    for (int i = 0; i < t1; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if(flag[j][i] != tmpColor)
            {
                return false;
            }
        }
    }

    tmpColor = flag[0][t1];
    if(color[(int)tmpColor]) return false;
    else
    {
        color[(int)tmpColor] = 1;
        for (int i = t1; i < t2; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if(flag[j][i] != tmpColor)
                {
                    return false;
                }
            }
        }
    }
    
   
    tmpColor = flag[0][t2];
    if(color[(int)tmpColor]) return false;
    else
    {
        color[(int)tmpColor] = 1;
        for (int i = t2; i < t3; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if(flag[j][i] != tmpColor)
                {
                    return false;
                }
            }
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    scanf("%d %d", &n, &m);
    
    getchar();
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            scanf("%c", &flag[i][j]);
        }
        getchar();
    }

    if(n % 3 && m % 3)
    {
        printf("NO\n");
        return 0;
    }
    else
    {
        if(n % 3 == 0)
        {
            if(judge_hang()) 
            {
                printf("YES\n");
                return 0;
            }
        }

        if(m % 3 == 0)
        {
            if(judge_lie())
            {
                printf("YES\n");
                return 0;
            }
        }
        printf("NO\n");
    }
    return 0;
}