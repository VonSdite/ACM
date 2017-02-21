#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);getchar();
	while(t--)
	{
		char s[1000];
		memset(s,0,sizeof(s));
		gets(s);
		int i;
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]>='a'&&s[i]<='z')
			{
				if(i==0) putchar(s[i]-32);
				else
				{
					if(s[i-1]==' ') putchar(s[i]-32);
				}
			}
			else if(s[i]>='A'&&s[i]<='Z')
			{
				if(i==0) putchar(s[i]);
				else 
				{
					if(s[i-1]==' ') putchar(s[i]);
				}
			}
		}
		puts("");
	}
	return 0;
}