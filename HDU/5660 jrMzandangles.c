#include<stdio.h>
#include<string.h>
int main()  
{  
    int t;  
    scanf("%d",&t);  
    while(t--)  
    {  
        int n,m;  
        scanf("%d %d",&n,&m);   
        int n1=(n-2)*180/n, m1=(m-2)*180/m; 
        int i, j;
        for(i=360/n1;i>=0;i--)
        {
        	for(j=0;j<=360/m1;j++)
        	{
        		if(i*n1+j*m1==360)
        		{
        			puts("Yes");
        			break;
        		}
        	}
        	if(i*n1+j*m1==360)
        	{
        		break;
        	}
        }  
        if(i<0) puts("No");
    }  
}  