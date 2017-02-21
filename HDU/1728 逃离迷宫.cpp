#include "iostream"
#include "cstring"
char map[105][105];
int re[105][105];
int k, x1, y1, x2, y2, flag;
int m, n, i, j;
int dir[4][2]={
	{1,0},{0,1},{-1,0},{0,-1}
};

void Dfs(int x, int y, int d)
{
	if(re[x][y]>k) return ;
	if(re[x][y]==k&&x!=x2&&y!=y2) return;
	if(x==x2&&y==y2&&re[x][y]<=k)
	{
		flag=1;
		return;
	}
	int i;
	for(i=0;i<4;i++)
	{
		int dx=x+dir[i][0];
		int dy=y+dir[i][1];
		if(d!=-1&&i!=d&&re[dx][dy]<re[x][y]+1) continue;
		if(dx>=0&&dx<m&&dy>=0&&dy<n&&map[dx][dy]=='.'&&re[dx][dy]>=re[x][y])
		{
			re[dx][dy]=re[x][y];
			if((d!=-1&&i!=d)) re[dx][dy]++;
			Dfs(dx,dy,i);
			if(flag)
          	return ;
		}
	}
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		flag=0;
		memset(re,1,sizeof(re));
		scanf("%d %d", &m, &n);
		for(i=0;i<m;i++) scanf("%s", map[i]);
		scanf("%d %d %d %d %d", &k, &y1, &x1, &y2, &x2);
		x1--;y1--;x2--;y2--;
		re[x1][y1]=0;
		Dfs(x1,y1,-1);
		if(flag) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}