#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e3 + 5;
int a[SIZE];

int main(int argc, char const *argv[])
{
    int n;
    int tmp;
    while (~scanf("%d", &n))
    {
        bool flag;
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
        }
        tmp = n;
        while (tmp)
        {
            flag = true;
            for (int i = 0; i < n; ++i)
            {
                if(i&1) 
                {
                    --a[i];
                    if(a[i]<0) a[i] += n;
                }
                else 
                {
                    ++a[i]; 
                    if(a[i]==n) a[i] -= n;
                }
            }
            for (int i = 0; i < n; ++i)
            {
                if(a[i] != i) 
                {
                    flag = false;
                    break;
                }
            }
            if(flag) break;
            --tmp;
        }
        if(flag) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}