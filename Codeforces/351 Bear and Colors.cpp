#include <cstdio>
#include "cstring"
#define N 5010    
int ans[N],num[N],a[N];  
int main()  
{  
    int n;
    while(~scanf("%d",&n))
    {  
        for(int i=0;i<n;i++) scanf("%d",&a[i]);  
        for(int i=0;i<n;i++)
        {  
            memset(num,0,sizeof(num));  
            int maxn=0,maxp=i;  
            for(int j=i;j<n;j++)
            {  
                num[a[j]]++;  
                if(num[a[j]]>maxn||(a[j]<maxp&&num[a[j]]==maxn))
                {  
                    maxn=num[a[j]];  
                    maxp=a[j];  
                }  
                ans[maxp]++;  
            }  
        }   
        for(int i=1;i<=n;i++)printf("%d ",ans[i]); 
    }
    return 0;  
}  