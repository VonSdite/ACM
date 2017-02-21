#include <stdio.h>
#include "string.h"
char a[201],b[201],c[402];
int visit[201][201]={0};
int  isOk=0;
void dfs(int i,int j,int k)
{	if(visit[i][j]==1) return;
	if(c[k]=='\0')
	{	isOk=1;	return;	}
	if(a[i]!='\0'&&c[k]==a[i])
		dfs(i+1,j,k+1);
	if(b[j]!='\0'&&c[k]==b[j])
		dfs(i,j+1,k+1);
	visit[i][j]=1;
}
int main()
{	
	int n,cnt=0;
	scanf("%d",&n);
	while(n--)
	{	isOk=0;
		memset(visit,0,sizeof(visit));
		scanf("%s%s%s",a,b,c);
		dfs(0,0,0);
        printf("Data set %d: %s\n",++cnt,isOk?"yes":"no");
	}
	return 0;
}