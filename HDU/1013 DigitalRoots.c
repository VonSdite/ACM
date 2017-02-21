#include<stdio.h>
int main(int argc, char const *argv[])
{
	char in[1000];
	while(1)
	{
		int res=0, i;
		gets(in);
		if(in[0]=='0') break;
		for(i=0;in[i]!='\0';i++) res+=in[i]-'0';
		printf("%d\n", (res+8)%9+1);
	}
	return 0;
}