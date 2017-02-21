#include "stdio.h"
#include "stdbool.h"
#include "string.h"
char s[100000];
int ch[100000];
bool vis[100000];
int main()
{
    int n, i;
    while(~scanf("%d", &n))
    {
        scanf("%s", s);
        for(i=0; i<n; i++) scanf("%d", &ch[i]);
        memset(vis,0,sizeof(vis));
        i=0;
        vis[i]=1;
        while(1)
        {
            if(s[i]=='>') i+=ch[i];
            else i-=ch[i];
            if(i<0||i>n-1)
            {
                printf("FINITE\n");break;
            }
            if(vis[i]==1)
            {
                printf("INFINITE\n");
                break;
            }
            else
            {
                vis[i]=1;
            }
        }
    }
    return 0;
}