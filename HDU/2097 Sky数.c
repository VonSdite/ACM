#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	while(~scanf("%d", &n)&&n)
	{
		int s=0, s1=0, s2=0, m=n;
		while(m)
		{
			s+=m%10;
			m/=10;
		}
		m=n;
		while(m)
		{
			s1+=m%16;
			m/=16;
		}
		m=n;
		while(m)
		{
			s2+=m%12;
			m/=12;
		}
		if(s==s1&&s1==s2)
			printf("%d is a Sky Number.\n", n);
		else printf("%d is not a Sky Number.\n", n);
	}
	return 0;
}