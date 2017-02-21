#include<stdio.h>
#include<string.h>
void reverse(char *a)
{
	int i, j;
	for(i=0,j=strlen(a)-1;i<j;i++,j--)
	{
		char temp=*(a+i);
		*(a+i)=*(a+j);
		*(a+j)=temp;
	}
}
int main(int argc, char const *argv[])
{
	int t, tt=1;
	scanf("%d", &t);
	while(t)
	{
		t--;
		char a[1000], b[1000];
		int record[1000]={0}, result[1001]={0}, i;
		memset(a,'0',sizeof(a));//让数组里面都为'0'方便后续计算 -2*'0'
		memset(b,'0',sizeof(b));
		scanf("%s %s", a, b);
		printf("Case %d:\n", tt);
		printf("%s + %s = ", a, b);
		tt++;
		reverse(a);
		reverse(b);
		a[strlen(a)]='0';//用%s输入 数组最后的那一位是\0 会影响后面的运算 要将其设置为'0'
		b[strlen(b)]='0';
		for(i=0;i<1000;i++)
		{
			if(i==0) 
			{
				result[i]=(a[i]+b[i]-2*'0')%10;
				record[i]=(a[i]+b[i]-2*'0')/10;
			}
			else
			{
				result[i]=(a[i]+b[i]+record[i-1]-2*'0')%10;
				record[i]=(a[i]+b[i]+record[i-1]-2*'0')/10;
			}
		}
		for(i=1000;i>=0;i--) if(result[i]!=0) break;
		if(i==-1) printf("%d", result[i+1]);
		else for(;i>=0;i--) printf("%d", result[i]);
		puts("");
		if(t!=0) puts("");
	}
	return 0;
}