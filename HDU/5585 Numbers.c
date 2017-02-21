#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char num[32];
    while(gets(num)!=NULL)
    {
        int i, sum=0, k=0;
        for(i=strlen(num)-1;i>=0;i--)
        {
            if(i==strlen(num)-1)
            {
                if((num[i]-'0')%5!=0&&(num[i]-'0')%2!=0)
                {
                    k=1;
                }
            }
            sum+=num[i]-'0';
        }
        if(k==1)
        {
            if(((sum+8)%9+1)%3==0) printf("YES\n");
            else printf("NO\n");
        }
        else if(k==0) printf("YES\n");
    }
    return 0;
}