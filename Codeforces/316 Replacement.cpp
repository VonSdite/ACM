#include <bits/stdc++.h>

using namespace std;

const int SIZE = 3e5+5;
char s[SIZE];

int main(int argc, char const *argv[])
{
    // freopen("1input.txt", "r", stdin);
    int n, m, cnt;
    int x;
    char c;
    while (~scanf("%d %d", &n, &m))
    {
        scanf("%s", s+1);
        cnt = 0;
        for (int i = 1; i <= n; ++i)
        {
            while ('.' == s[i])
            {
                ++cnt;
                ++i;
            }
            if(1!=i && '.'==s[i-1]) --cnt;
        }
        for (int i = 0; i < m; ++i)
        {
            scanf("%d %c", &x, &c);
            if(x>1 && x<n)
            {
                if('.'==s[x-1] && '.'==s[x+1])
                {
                    if('.'==c && '.'!=s[x])
                    {
                        cnt += 2;
                    }
                    else if('.'!=c && '.'==s[x])
                    {
                        cnt -= 2;
                    }
                }
                else if('.'==s[x-1] || '.'==s[x+1])
                {
                    if('.'==c && '.'!=s[x])
                    {
                        ++cnt;
                    }
                    else if('.'!=c && '.'==s[x])
                    {
                        --cnt;
                    }

                }
            }
            else if(1 == x)
            {
                if('.' == s[x+1])
                {
                    if('.'==c && '.'!=s[x]) ++cnt;
                    else if('.'!=c && '.'==s[x]) --cnt;
                }
            }
            else if(n == x)
            {
                if('.' == s[x-1])
                {
                    if('.'==c && '.'!=s[x]) ++cnt;
                    else if('.'!=c && '.'==s[x]) --cnt;
                }
            }
            s[x] = c;
            printf("%d\n", cnt);
        }
    }
    return 0;
}