#include <bits/stdc++.h>

using namespace std;

const int SIZE = 105;
int a[SIZE];
int b[SIZE];

bool cmp(const int &a, const int &b)
{
    return a > b;
}

int main(int argc, char const *argv[])
{
    int n, k;
    while (~scanf("%d %d", &n, &k))
    {
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < k; ++i)
        {
            scanf("%d", &b[i]);
        }
        int kk = 0;
        sort(b, b+n, cmp);
        for (int i = 0; i < n; ++i)
        {
            if(!a[i])
            {
                a[i] = b[kk];
                ++kk;
            }
        }
        bool flag = false;
        for (int i = 0; i < n-1; ++i)
        {
            if(a[i] > a[i+1]) 
            {
                flag = true;
                break;
            } 
        }
        if(flag) printf("Yes\n");
        else printf("No\n");
    }   
    return 0;
}
