#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch[100];
    while(gets(ch)!=NULL)
    {
        char *p=ch;
        float sum=0;
        int j=0;
        for(;*p!='\0';p++)
        {
            switch(*p)
            {
                case 'A':sum+=4;j++;break;
                case 'B':sum+=3;j++;break;
                case 'C':sum+=2;j++;break;
                case 'D':sum+=1;j++;break;
                case 'F':j++;break;
                case ' ':break;
                default: printf("Unknown letter grade in input\n");j=-500;break;
            }
        }
        if(j<0) continue;
        printf("%.2f\n", sum/j);
    }
    return 0;
}