#include <bits/stdc++.h>

using namespace std;

int a[4][4];

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            scanf("%d", &a[i][j]);  
        }
    }
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if(a[i][j] && j != 3)
            {
                if(a[(i+3-j)%4][3] || a[i][3]) 
                {
                    printf("YES\n");
                    return 0;
                }
            }
        }
    }
    printf("NO\n");
    return 0;
}