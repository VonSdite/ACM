#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);
	getchar();
	while(t--)
	{
		char s[52], ss[52];
		gets(s);
		gets(ss);
		int i;
		for(i=0;i<strlen(s)/2;i++) printf("%c", s[i]);
		printf("%s", ss);
		for(;i<strlen(s);i++) printf("%c", s[i]);
		puts("");
	}
	return 0;
}