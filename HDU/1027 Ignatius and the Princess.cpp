#include <stdio.h>
#include <string.h>
int main()
{
	int i,j,k,n,m,t;
	int f[9]={0,1,1,2,6,24,120,720,5040};
	int num[9],store[8];
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		i=j=8,k=t=0,m=m-1;
		memset(num,0,sizeof(num));
		while(m)//获取num数组
		{
			if(m>=f[i])
			{
				m-=f[i];
				num[i]+=1;
			}else
			{
				i--;
			}
		}
		while(j&&!num[j])//得到从哪一位开始改变
		{
			j--;
		}
		for(i=0;i<j;i++)
		{
			store[i]=n-j+1+i;//改变的最后j个数字
		}
		for(i=1;i<=n-j;i++)
			printf("%d ",i);
	    for(k=j;k>1;k--)
		{
			printf("%d ",store[t+num[k]]);
			for(i=t+num[k];i>t;i--)
				store[i]=store[i-1];//每选一次就排一次数组
			t++;
		}
		printf("%d\n",store[t+num[k]]);
	}
	return  0; 
}