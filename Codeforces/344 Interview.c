#include "stdio.h"
int main(int argc, char const *argv[])
{
	int a[1100], b[1100], n, i, s1, s2;
	while(~scanf("%d", &n))
	{
		for(i=0;i<n;i++) scanf("%d", &a[i]);
		for(i=0;i<n;i++) scanf("%d", &b[i]);
		for(i=1,s1=a[0],s2=b[0];i<n;i++)
		{
			s1|=a[i];
			s2|=b[i];
		}
		printf("%d\n", s1+s2);
	}
	return 0;
}