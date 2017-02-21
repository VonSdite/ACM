#include "iostream"
#include "queue"
#include "cstring"
using namespace std;

char grid[101][101];
int flag[101][101];
int dir[8][2]={
	{1,0},{1,1},{0,1},{-1,1},{-1,0},{-1,-1},{0,-1},{1,-1}
};

queue <int> q;

void Bfs(int m, int n)
{
	while(!q.empty()) 
		q.pop();
	int i, j, k;
	int count=0;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			if(grid[i][j]=='@'&&flag[i][j]==0)
			{
				int x, y, s, r;
				q.push(i*n+j);
				while(!q.empty())
				{
					int head=q.front();
					s=head/n;
					r=head%n;
					q.pop();
					for(k=0;k<8;k++)
					{
						x=s+dir[k][0];
						y=r+dir[k][1];
						if(x>=0&&x<m&&y>=0&&y<n&&grid[x][y]=='@'&&flag[x][y]==0)
						{
							flag[x][y]=1;
							q.push(x*n+y);
						}
					}
				}
				count++;
			}
		}
		printf("%d\n", count);
}

int main(int argc, char const *argv[])
{
	int m, n, i;
	while(~scanf("%d %d", &m, &n)&&m)
	{
		memset(flag,0,sizeof(flag));
		for(i=0;i<m;i++) scanf("%s", grid[i]);
		Bfs(m,n);
	} 
	return 0;
}