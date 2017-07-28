#include <bits/stdc++.h>

using namespace std;

const int maxn = 5005;

map <string, int> mp;

struct Q {
    string s;
    int num, a, b, op;
} q[maxn];

int n, m;

int cal(int x, int p) 
{
    q[0].num = p;
    int ans = 0;
    for (int i = 1; i <= n; i++) 
    {
        if (q[i].op == 0) q[i].num = q[i].s[x] - '0';
        else 
        {
            int a = q[q[i].a].num, b = q[q[i].b].num;
            if (q[i].op == 1) q[i].num = a & b;
            if (q[i].op == 2) q[i].num = a | b;
            if (q[i].op == 3) q[i].num = a ^ b;
        }
        ans += q[i].num;
    }
    return ans;
}

int main()
{
    cin >> n >> m;
    string s;
    mp["?"] = 0;
    for (int i = 1; i <= n; i++) 
    {
        cin >> s;
        mp[s] = i;
        cin >> s;
        cin >> s;
        if (isdigit(s[0])) 
        {
            q[i].op = 0;
            q[i].s = s;
        }
        else {
            q[i].a = mp[s];
            cin >> s;
            if (s[0] == 'A') q[i].op = 1;
            if (s[0] == 'O') q[i].op = 2;
            if (s[0] == 'X') q[i].op = 3;
            cin >> s;
            q[i].b = mp[s];
        }
    }
    string ans1 = "", ans2 = "";
    for (int i = 0; i < m; i++) 
    {
        int cnt1 = cal(i, 0);
        int cnt2 = cal(i, 1);
        if (cnt1 <= cnt2) ans1 += '0'; else ans1 += '1';
        if (cnt1 >= cnt2) ans2 += '0'; else ans2 += '1';
    }
    cout << ans1 << endl;
    cout << ans2 << endl;
    return 0;
}