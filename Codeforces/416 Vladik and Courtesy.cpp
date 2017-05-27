#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    int cnt;
    while (~scanf("%d %d", &a, &b))
    {
        cnt = 1;
        while (a>=0 && b>=0)
        {
            if(cnt & 1)
            {
                a -= cnt;
            }
            else
            {
                b -= cnt;
            }
            ++cnt;
        }
        if(a<0) printf("Vladik\n");
        else printf("Valera\n");
    }
    return 0;
}