#include "iostream"
using namespace std; 
    int main()  
    {  
        int n,t,max,ans,i,j,prime[20001]={0,1};  
        for(i=2;i<20001;i++)   //用素数筛选法改装，使prime[t]保存t的最大素因数  
        {  
            if(prime[i]==0)  
            {  
                for(j=i;j<20001;j+=i)  
                {  
                    prime[j]=i;  
                }  
            }  
        }  
        while(scanf("%d",&n)!=EOF)  
        {  
            max=0;  
            while(n--)  
            {  
                scanf("%d",&t);  
                if(prime[t]>max)  
                {  
                    max=prime[t];  
                    ans=t;  
                }  
            }  
            printf("%d\n",ans);  
        }  
        return 0;  
    }  