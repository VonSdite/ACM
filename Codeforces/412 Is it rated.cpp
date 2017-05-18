#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    bool flag;
    while(~scanf("%d", &n))
    {
        int a, b;
        int vb[10000];
        int cnt = 0;
        flag = false;
        for (int i = 0; i < n; ++i)
        {
            scanf("%d %d", &a, &b);
            if (a != b)
            {
                flag = true;
            }
            if (i && b > vb[i-1]) cnt++;
            vb[i] = b;
        }
        if(!flag)
        {
            if (cnt != 0)
            {
                printf("unrated\n");
            }
            else printf("maybe\n");
        }
        else printf("rated\n");
    }
    return 0;
}