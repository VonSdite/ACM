#include<stdio.h>
int min(int i, int j)
{
	return (i<j)?i:j;
}
int main(int argc, char const *argv[])
{
	int i, j, k;
	scanf("%d %d %d", &i, &j, &k);
	if(168>min(min(i,j),k)) printf("CRASH %d\n",min(min(i,j),k));
	else printf("NO CRASH\n");
	return 0;
}