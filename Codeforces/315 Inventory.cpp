#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5+5;
int a[SIZE];
unordered_map<int, int> record;
queue<int> li;

int main(int argc, char const *argv[])
{
    int n;
    while (~scanf("%d", &n))
    {       
        record.clear();
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
            if(a[i] > n) li.push(i);
            else
            {
                ++record[a[i]];
                if(record[a[i]] > 1)
                {
                    li.push(i);
                }
            }
        }

        for (int i = 1; i <= n; ++i)
        {
            if(!record[i])
            {
                a[li.front()] = i;
                li.pop();
            }
        }

        for (int i = 0; i < n; ++i)
        {
            printf("%d", a[i]);
            if(i != n-1) printf(" ");
            else printf("\n");
        }
    }
    return 0;
}