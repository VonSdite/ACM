#include "stdio.h"
    int a[1000000];  
      
    int main()  
    {  
        int n,m,i,temp,sum=0;  
        scanf("%d%d",&n,&m);  
        for(i=0;i<n;i++)  
        {  
            scanf("%d",&temp);  
            if(temp<1000000)  
            {  
                a[(temp-1)]=1;  
            }  
        }  
        for(i=0,temp=0;sum<=m;i++)  
        {  
            if(a[i]!=1)  
            {  
                sum+=(i+1);  
                if(sum>m)  
                {  
                        sum-=(i+1);  
                        break;  
                }  
                temp++;  
            }  
        }  
        printf("%d\n",temp);  
        temp=i-1;  
        for(i=0;i<=temp;i++)  
        {  
            if(a[i]!=1)  
            {  
                printf("%d ",(i+1));  
            }  
        }  
        return 0;  
    }  