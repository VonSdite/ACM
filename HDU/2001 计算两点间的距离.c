#include<stdio.h>
#include<string.h>
int main()
{
  double x1,x2,y1,y2,d;

while(scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2)!=EOF)
  {
  d=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
  d=pow(d,0.5);
  printf("%.2lf\n",d);
  }
return 0;
}