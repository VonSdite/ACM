#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		if(a%b) puts("NO");
		else puts("YES");
	}
	return 0;
}