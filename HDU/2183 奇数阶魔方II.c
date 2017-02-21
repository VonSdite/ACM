/*找到1的位置， 然后斜向下， 如果此时的i值是n的倍数，则向下移动两行*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n, a[22][22];
	while(~scanf("%d", &n)&&n)
	{
		int i=1, x=(n+1)/2, y=(n-1)/2;
		while(i<=n*n)
		{
			a[x][y]=i;
			if(i%n)
			{
				x++;y++;
			}
			else x+=2;
			if(y>n-1) y-=n;
			if(x>n-1) x-=n;
			i++;
		}
		for(i=0;i<n;i++)
		{
			int j;
			for(j=0;j<n;j++) 
			{
				printf("%4d", a[i][j]);
				if(j==n-1) puts("");
			}
		}
	}
	return 0;
}