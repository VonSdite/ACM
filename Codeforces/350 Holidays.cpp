#include <iostream>

using namespace std;

int main()
{
  int n,maxo=0,mino=0,i;
  cin>>n;
  for(i=1;i<=n;i++)
  {
      if(i%7==1 || i%7==2)
      {
         maxo+=1;
      }
      if(i%7==6 || i%7==0)
      {
          mino+=1;
      }
  }
  cout<<mino<<" "<<maxo<<endl;
  return 0;
}