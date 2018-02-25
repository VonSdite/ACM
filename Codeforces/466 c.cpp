#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5+5;
char s[SIZE];
char t[SIZE];
char ch_set[28];
bool exists[300];

int main(int argc, char const *argv[])
{
    int n, k;
    scanf("%d %d", &n, &k);
    getchar();
    gets(s);

    int len = 0;
    memset(exists, 0, sizeof(exists));
    for (int i = 0; i < n; ++i)
    {
        if (len == 26) break;

        if (!exists[int(s[i])])
        {
            ch_set[len++] = s[i];
            exists[int(s[i])] = true;
        }
    }

    sort(ch_set, ch_set+len);


    if (n >= k)
    {
        t[k] = '\0';

        for (int i = 0; i < k; ++i)
        {
            t[i] = s[i];
        }

        int i;
        for (i = k-1; i >= 0; --i)
        {
            if (t[i] == ch_set[len-1])
            {
                t[i] = ch_set[0];
            }
            else break;
        }

        int j;
        for (j = 0; j < len; ++j)
        {
            if (t[i] == ch_set[j]) break;
        }
        t[i] = ch_set[j+1];
    }
    else 
    {
        for (int i = 0; i < n; ++i)
        {
            t[i] = s[i];
        }
        for (int i = n; i < k; ++i)
        {
            t[i] = ch_set[0];    
        }
        t[k] = '\0';
    }
    puts(t);

    return 0;
}