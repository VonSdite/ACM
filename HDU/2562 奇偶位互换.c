#include<stdio.h>
int main(int argc, char const *argv[])
{
	int c;
	scanf("%d", &c);getchar();
	while(c--)
	{
		char s[52];
		gets(s);
		int i, temp;
		for(i=0;s[i+1]!=0;i++)
		{
			if(i%2==0)
			{
				temp=s[i];
				s[i]=s[i+1];
				s[i+1]=temp;
			}
		}
		puts(s);
	}
	return 0;
}