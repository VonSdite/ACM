#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5+5;
string s1, s2;
char ans[SIZE];

int main(int argc, char const *argv[])
{
    int n, t;
    while (~scanf("%d %d", &n, &t))
    {
        memset(ans, 0, sizeof(ans));
        cin >> s1 >> s2;
        int tmp = n-t;
        int k = 0;
        for (int i = 0; i < n; ++i)
        {
            if(k < tmp && s1[i] == s2[i]) 
            {
                ++k;
                ans[i] = s1[i];
            }
            else ans[i] = ' ';
        }
        if(n-k < 2*(tmp-k)) printf("-1\n");
        else
        {
            for (int i = 0; i < n; ++i)
            {
                if(tmp == k) break;
                while (ans[i] != ' ') ++i;
                ans[i] = s1[i];
                while (ans[i] != ' ') ++i;
                ans[i] = s2[i];
                ++k;
            }
            for (int i = 0; i < n; ++i)
            {
                while (i != n && ans[i] != ' ') ++i;
                if(i == n) break;
                for (char j = 'a'; j <= 'z'; ++j)
                {
                    if(s1[i] != j && s2[i] != j) 
                    {
                        ans[i] = j;
                        break;
                    }
                }
            }
            printf("%s\n", ans);
        }
    }    
    return 0;
}