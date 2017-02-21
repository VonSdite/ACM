#include <iostream>
#include <string.h>
using namespace std;
const int maxn=100000+5;
int a[maxn];
bool is[maxn];
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        memset(is,false,sizeof(is));
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        int num=n;
        for(int i=0;i<n;i++)
        {
            is[a[i]]=true;
            while(is[num])
            {
                printf("%d ",num);
                num--;
            }
            printf("\n");
        }
    }
    return 0;
}
