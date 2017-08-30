#include <bits/stdc++.h>

using namespace std;

const int SIZE = 105;
char color[SIZE];
unordered_map<char, int> mp;

int main(int argc, char const *argv[])
{
    int n, k;
    while (~scanf("%d %d", &n, &k))
    {
        bool flag = true;
        mp.clear();
        scanf("%s", color);
        for (int i = 0; i < n; ++i)
        {
            ++mp[color[i]];
            if (mp[color[i]] > k)
            {
                flag = false;
            }
        }
        if(flag) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}