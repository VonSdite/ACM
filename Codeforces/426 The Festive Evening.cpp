#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e6+5;
string order;
unordered_map<char, int> cnt, vis;

int main(int argc, char const *argv[])
{
    int n, k;
    while (~scanf("%d %d", &n, &k))
    {
        cnt.clear();
        vis.clear();
        cin >> order;
        if(k == 26)
        {
            printf("NO\n");
        }
        else
        {
            bool flag = true;
            for (int i = 0; i < n; ++i)
            {
                ++cnt[order[i]]; 
            }

            for (int i = 0; i < n; ++i)
            {
                if(!vis[order[i]])
                {
                    ++vis[order[i]];
                    --k;
                    if(k < 0)
                    {
                        flag = false;
                        break;
                    }
                }
                --cnt[order[i]];

                if(!cnt[order[i]])
                {
                    ++k;
                }

            }
            if(flag) printf("NO\n");
            else printf("YES\n");
        }
    }
    return 0;
}       