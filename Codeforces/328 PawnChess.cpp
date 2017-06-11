#include <bits/stdc++.h>

using namespace std;

char box[9][9];

int main(int argc, char const *argv[])
{
    memset(box, 0, sizeof(box));
    int a, b;
    a = b = 7;
    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            scanf("%c", &box[i][j]);
        }
        getchar();
    }
    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            if(box[i][j] == 'W') 
            {
                int k;
                for (k = i-1; k >= 0; --k)
                {
                    if(box[k][j] == 'B') break;
                }
                if(k < 0) a = min(a, i);
            }
            if(box[i][j] == 'B') 
            {
                int k;
                for (k = i+1; k < 8; ++k)
                {
                    if(box[k][j] == 'W') break;
                }
                if(k >= 8) b = min(b, 8-i-1);
            }
        }
    }
    if(a <= b) printf("A\n");
    else printf("B\n"); 
    return 0;
}