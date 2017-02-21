#include<stdio.h>
int main()
{
 int s,t,i;
    double vul,d,sum;
 while(scanf("%lf%lf",&vul,&d)!=EOF)
 {
  s=vul/d;
  if(vul>s*d) s++;
  sum=0;t=0;
  for(i=1;;i++)
  {
   sum+=i*d;
   if(sum>=vul)break;
      else t++;
  }
  s+=t;
  printf("%d\n",s);
 }
 return 0;
}