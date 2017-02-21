#include "stdio.h"
#include "string.h"
#include "stdlib.h"
int cmp(const void *a, const void *b)
{
    return *(int*)a-*(int*)b;
}
int main(int argc, char const *argv[])
{
    char num[2000], *c;
    int num1[2000];
    while(gets(num)!=NULL)
    {
        num1[0]=atoi(strtok(num,"5"));
        int i=1;
        while(c=strtok(NULL,"5"))
        {
            num1[i++]=atoi(c);
        }
        qsort(num1,i,sizeof(int),cmp);
        int j;
        for(j=0;j<i;j++) 
        {
            printf("%d", num1[j]);
            if(j!=i-1) putchar(' ');
            else puts("");
        }
    }
    return 0;
}