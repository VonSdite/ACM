#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5+5;
int a[SIZE];

int main(int argc, char const *argv[])
{
    int n;
    bool flag;
    while (~scanf("%d", &n))
    {
        flag = false;
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
            while(!(a[i]&1)) a[i] >>= 1;
            while(a[i] % 3 == 0) a[i] /= 3;
        }
        for (int i = 1; i < n; ++i)
        {
            if(a[i] != a[0])
            {
                flag = true;
                break;
            }
        }
        if(flag) printf("No\n");
        else printf("Yes\n");
    }  
    return 0;
}
