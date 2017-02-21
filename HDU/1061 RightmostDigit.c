#include "stdio.h"
int main(int argc, char const *argv[])
{
	// int i, a[10], k, t, n;
	// for(i=0, k=0, t=0;i<10;i++, k++)
	// {
	// 	n=i;
	// 	while(1)
	// 	{
	// 		n*=i;
	// 		n%=10;
	// 		t++;
	// 		if(n==i)
	// 		{
	// 			a[k]=t;
	// 			break;
	// 		}
	// 	}
	// 	t=0;
	// }
	// for(i=0;i<10;i++) printf("%d\n", a[i]); 
	//打表的代码
	int t, a[10]={1,1,4,4,2,1,1,4,4,2};
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int temp=n, num, right_digit=1;
		n%=10;
		num=temp%a[n];
		if(num==0) num=a[n];
		while(num--)
		{
			right_digit*=n;
			right_digit%=10;
		}
		printf("%d\n", right_digit);
	}
	return 0;
}