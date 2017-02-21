#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    char s[53][1000];
    scanf("%d",&t);
    while(t--)
    {
        int n, i, j, ans=0;memset(s,0,sizeof(s));
        scanf("%d", &n);
        getchar();
        for(i=1;i<=n;i++) gets(s[i]+1);//注意空开了第一列的位置
        for(i=1;i<=n;i++)
        {
            for(j=1;s[i][j]!='\0';j++)
            {
                if(s[i][j]=='R'||s[i][j]=='G')
                    if(s[i-1][j-1]!='R'&&s[i-1][j-1]!='G') ans++;
                if(s[i][j]=='B'||s[i][j]=='G')
                    if(s[i-1][j+1]!='B'&&s[i-1][j+1]!='G') ans++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}