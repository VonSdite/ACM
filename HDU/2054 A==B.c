#include<stdio.h>
#include<string.h>
char a[100000], b[100000];
void clean(char *str)
{
	int i;
	for(i=strlen(str)-1;str[i]=='0';i--)
	{
		if(strstr(str,".")!=NULL)
		{
			str[i]=0;
		}
	}
	if(str[i]=='.') str[i]=0;
}
int main(int argc, char const *argv[])
{
	while(~scanf("%s %s", a, b))
	{
		clean(a);
		clean(b);
		if(strcmp(a,b)==0) printf("YES\n");
		else printf("NO\n");
	}	
	return 0;
}