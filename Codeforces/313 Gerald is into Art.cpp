#include <bits/stdc++.h>

using namespace std;

int a[2];
int b[2];
int c[2];

int main(int argc, char const *argv[])
{
    bool flag;
    // freopen("1input.txt", "r", stdin);
    while (~scanf("%d %d", &a[0], &a[1]))
    {
        flag = false;
        scanf("%d %d", &b[0], &b[1]);
        scanf("%d %d", &c[0], &c[1]);
        for (int i = 0; i < 2; ++i)
        {
            for (int j = 0; j < 2; ++j)
            {
                for (int k = 0; k < 2; ++k)
                {
                    if(b[i]+c[j]<=a[k] && max(b[(i+1)&1], c[(j+1)&1])<=a[(k+1)&1])
                    {
                        flag = true;
                        break;
                    }
                }
                if(flag) break;
            }
            if(flag) break;
        }
        if(flag) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}