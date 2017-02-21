#include<stdio.h>
int main(int argc, char const *argv[])
{
	char a[100000];
	char c[27]="abcdefghijklmnopqrstuvwxyz";
	while(gets(a))
	{
		int i, b[26]={0};
		for(i=0;a[i]!='\0';i++)
		{
			switch(a[i])
			{
				case 'a': b[0]++;break;
				case 'b': b[1]++;break;
				case 'c': b[2]++;break;
				case 'd': b[3]++;break;
				case 'e': b[4]++;break;
				case 'f': b[5]++;break;
				case 'g': b[6]++;break;
				case 'h': b[7]++;break;
				case 'i': b[8]++;break;
				case 'j': b[9]++;break;
				case 'k': b[10]++;break;
				case 'l': b[11]++;break;
				case 'm': b[12]++;break;
				case 'n': b[13]++;break;
				case 'o': b[14]++;break;
				case 'p': b[15]++;break;
				case 'q': b[16]++;break;
				case 'r': b[17]++;break;
				case 's': b[18]++;break;
				case 't': b[19]++;break;
				case 'u': b[20]++;break;
				case 'v': b[21]++;break;
				case 'w': b[22]++;break;
				case 'x': b[23]++;break;
				case 'y': b[24]++;break;
				case 'z': b[25]++;break;
			}
		}
		for(i=0;i<26;i++) printf("%c:%d\n", c[i], b[i]);
		puts("");
	}
	return 0;
}