#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    while (~scanf("%d", &n))
    {
        int flag = 0;
        for (int i = 0; i < n; ++i)
        {
            if(flag >= 0 && flag < 2)
            {
                printf("a");
                ++flag;
            }
            else
            {
                printf("b");
                ++flag;
                if(4 == flag) flag = 0;
            }
        }
            printf("\n");
    }
    return 0;
}