#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, t;
    while (~scanf("%d %d", &n, &t))
    {
        switch(t)
        {
            case 10:
                if(n == 1) printf("-1\n");
                else 
                {
                    printf("1");
                    for (int i = 0; i < n-1; ++i)
                    {
                        printf("0");
                    }   
                    printf("\n");
                }
            break;
            default:
                for (int i = 0; i < n; ++i)
                {
                    printf("%d", t);
                }
                printf("\n");
        }
    }
    return 0;
}