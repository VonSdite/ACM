#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    int cnt;
    while (~scanf("%d", &n))
    {
        cin >> s;
        cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                cnt++;
            else
                cnt--;
        }
        printf("%d\n", abs(cnt));
    }
    return 0;
}