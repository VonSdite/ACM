#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, tmp;
    bool flag;
    while (~scanf("%d", &n))
    {
        flag = false;
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &tmp);
            if(1 == tmp) flag = true;
        }
        if(flag) printf("-1\n");
        else printf("1\n");
    }
    return 0;
}