#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
	char fis[10];
	while(gets(fis)!=NULL&&strcmp(fis,"START")==0&&strcmp(fis,"ENDOFINPUT")!=0)
	{
		char mes[201], temp[10];
		gets(mes);
		int i;
		for(i=0;i<201;i++)
		{
			if(mes[i]>='F'&&mes[i]<='Z') mes[i]-=5;
			else if(mes[i]>='A'&&mes[i]<='E') mes[i]+=21;
		}
		gets(temp);
		puts(mes);
	}	
	return 0;
}