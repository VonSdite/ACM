#include <iostream>

using namespace std;

const int SIZE = 1e5+5;
bool vis[SIZE];


int main(int argc, char const *argv[])
{
    int n;
    int tmp;
    while (~scanf("%d", &n))
    {
        int c = n;
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &tmp);
            vis[tmp] = true;
            if(vis[c])
            {
                while (c)
                {
                    if(!vis[c]) break;
                    printf("%d ", c);
                    vis[c] = false;
                    --c;
                }
                printf("\n");
            }
            else printf("\n");
        }
        printf("\n");
    }
    return 0;
}