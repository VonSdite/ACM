#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	char pas[30];
	memset(pas,0,sizeof(pas));
	while(gets(pas)!=NULL&&strcmp(pas,"end")!=0)
	{
		int k=0;
		int i;
		for(i=0;pas[i]!='\0';i++)
		{
			if(pas[i]=='a'||pas[i]=='e'||pas[i]=='i'||pas[i]=='o'||pas[i]=='u') k++;
		}
		if(k<1) 
		{
			printf("<%s> is not acceptable.\n", pas);
		}
		if(k>0)
		{
			k=0;
			for(i=0;pas[i+1]!='\0';i++)
			{
				if(pas[i]==pas[i+1]&&pas[i]!='e'&&pas[i]!='o')
				{
					printf("<%s> is not acceptable.\n", pas);k=1;
					break;
				}
			}
			if(k==0)
			{
				for(i=0;pas[i+2]!='\0';i++)
				{
					if(pas[i]=='a'||pas[i]=='e'||pas[i]=='i'||pas[i]=='o'||pas[i]=='u')
						{
							if(pas[i+1]=='a'||pas[i+1]=='e'||pas[i+1]=='i'||pas[i+1]=='o'||pas[i+1]=='u')
							{
								if(pas[i+2]=='a'||pas[i+2]=='e'||pas[i+2]=='i'||pas[i+2]=='o'||pas[i+2]=='u')
								{
									printf("<%s> is not acceptable.\n", pas);k=1;
									break;
								}
							}
						}
					else if(pas[i]!='a'&&pas[i]!='e'&&pas[i]!='i'&&pas[i]!='o'&&pas[i]!='u')
						{
							if(pas[i+1]!='a'&&pas[i+1]!='e'&&pas[i+1]!='i'&&pas[i+1]!='o'&&pas[i+1]!='u')
							{
								if(pas[i+2]!='a'&&pas[i+2]!='e'&&pas[i+2]!='i'&&pas[i+2]!='o'&&pas[i+2]!='u')
								{
									printf("<%s> is not acceptable.\n", pas);k=1;
									break;
								}
							}
						}
				}
				if(k==0) printf("<%s> is acceptable.\n", pas);
			}
			memset(pas,0,sizeof(pas));
		}
	}
	return 0;
}