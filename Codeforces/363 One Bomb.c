#include "stdio.h"
#define N 1010
char a[N][N];
int s1[N],s2[N];
int main()
{
    int n,m,i,j,ans=0,tp;
    while(~scanf("%d %d",&n,&m))
    {
	    for(i=1;i<=n;i++)
	        scanf("%s",a[i]+1);
	    for(i=1;i<=n;i++)
	        for(j=1;j<=m;j++)
	            if(a[i][j]=='*')
	            {
	                ans++;
	                s1[i]++;
	                s2[j]++;
	            }
	    for(i=1;i<=n;i++)
	        for(j=1;j<=m;j++)
	        {
	            tp=a[i][j]=='*';
	            if(s1[i]+s2[j]-tp==ans)
	            	{
	            		printf("YES\n%d %d\n",i,j);
	            		return 0;
	            	}
	        }
	    printf("NO\n");
	}
    return 0;
}