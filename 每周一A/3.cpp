#include <iostream>
#include <string.h>
using namespace std;
int num[60];
int a[2500],b[2500];
int na[55],nb[55];
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        memset(num,0,sizeof(num));
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        memset(na,0,sizeof(na));
        memset(nb,0,sizeof(nb));
        for(int i=0;i<(n*(n-1))/2-1;i++)
        {   
            scanf("%d%d",&a[i],&b[i]);
            num[a[i]]++;
            num[b[i]]++;
        }
        int two[2];
        int j=0;
        for(int i=1;i<=n;i++)
        {
            if(num[i]==n-2)
                two[j++]=i;
        }
        j=0;
        int c=0,d=0;
        
        for(int i=0;i<(n*(n-1))/2-1;i++)
        {
            
            if(a[i]==a[two[0]]||a[i]==a[two[1]]||b[i]==b[two[0]]||b[i]==b[two[1]]){
                na[j]=a[i];
                nb[j++]=b[i];
                if(na[j]==a[two[0]])
                    c++;
                if(na[j]==a[two[1]])
                    d++;
            }
        }
        bool flag=true;
        if(c<=d)
            flag=false;

        if(flag)
            printf("%d %d\n",two[0],two[1]);
        else
            printf("%d %d\n",two[1],two[0]);
    }
}