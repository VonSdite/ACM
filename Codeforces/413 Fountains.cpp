#include <bits/stdc++.h>

using namespace std;

std::vector<pair<int, int>> v[2];

const int SIZE = 1e5+5;
int pref[SIZE];

int solve(vector<pair<int, int>> &z, int b) 
{
    sort(z.begin(), z.end());
    int cnt = (int)z.size();
    if (cnt < 2) return 0;

    pref[0] = 0;
    for (int i = 0; i < cnt; i++)
        pref[i + 1] = max(pref[i], z[i].second);
    int i = 0;
    int res = 0;
    for (int j = cnt - 1; j >= 0 ; j--) 
    {
        i = min(i, j);
        while (i < j && z[i].first + z[j].first <= b) 
        {
            i++;
        }
        if (i > 0) 
        {
            res = max(res, pref[i] + z[j].second);
        }
    }
    return res;
}

int main(int argc, char const *argv[])
{
    int n, c, d;
    int b, p;
    char tmp;
    int x, y;
    int ans;
    while(~scanf("%d %d %d", &n, &c, &d))
    {
        x = y = ans = 0;
        for (int i = 0; i < n; ++i)
        {
            scanf("%d %d %c", &b, &p, &tmp);
            switch(tmp)
            {
                case 'C':
                    if(p <= c) 
                    {
                        x = max(x, b);
                    }
                    v[0].push_back(make_pair(p, b));
                    break;
                case 'D':
                    if(p <= d) y = max(y, b);
                    v[1].push_back(make_pair(p,b));
                    break;
            }
        }
        if(x && y) ans =  max(ans, x+y);
        ans = max(ans, solve(v[0], c));
        ans = max(ans, solve(v[1], d));
        printf("%d\n", ans);
    }
    return 0;
}