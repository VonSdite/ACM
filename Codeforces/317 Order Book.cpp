#include <iostream>
#include <map>
#include <iterator>
#include <bits/stdc++.h>

using namespace std;

map<int, int> s;
map<int, int> b;

int main()
{
    int n, ss;
    char dir;
    int p, q, cnt;
    map<int, int>::reverse_iterator iter;
    while (~scanf("%d %d", &n, &ss))
    {
        s.clear();
        b.clear();
        getchar();
        for (int i = 0; i < n; ++i)
        {
            scanf("%c %d %d", &dir, &p, &q);
            getchar();
            switch(dir)
            {
                case 'B':
                    b[p] += q;
                break;

                case 'S':
                    s[p] += q;
                break;
            }
        }

        cnt = 0;
        int len = (int)s.size();
        iter = s.rbegin();
        while (len > ss)
        {
            ++iter;
            --len;
        }
        for (; iter != s.rend(); ++iter)
        {
            printf("S %d %d\n", iter->first, iter->second);
            ++cnt;
            if(cnt == ss) break;
        }
        cnt = 0;
        for (iter = b.rbegin(); iter != b.rend(); ++iter)
        {
            printf("B %d %d\n", iter->first, iter->second);
            ++cnt;
            if(cnt == ss) break;
        }
    }
    return 0;
}