#include "stdio.h"
int main(int argc, char const *argv[])
{
	int t;
	while(~scanf("%d", &t))
	{
		if(t>=0&&t<=100)
		{
			switch(t/10)
			{
				case 10:case 9:printf("A\n");break;
				case 8:printf("B\n");break;
				case 7:printf("C\n");break;
				case 6:printf("D\n");break;
				default:printf("E\n");break;
			}
		}
		else puts("Score is error!");
	}
	return 0;
}