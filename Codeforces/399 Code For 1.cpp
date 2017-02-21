#include <cstdio>
#include <algorithm>

using namespace std;

int main() 
{
	long long x, l, r, t;
	int i, n, R = 0;
	scanf("%I64d %I64d %I64d", &x, &l, &r);
	for (n = 1; x >> n; n++);
	for (t = l; t <= r; t++) 
	{
		for (i = 0; !(t >> i & 1); i++);
		R += x >> (n - i - 1) & 1;
	}
	printf("%d\n", R);
	return 0;
}

/*
//官方题解
#include <bits/stdc++.h>
using namespace std;
long long int cnt(long long int temp) //returns the length of final list 
{
  long long int x=1;
  while(temp>1)
  {
    temp/=2;
    x*=2;
  }
  return x;
}
int is_one(long long int pos,long long int target,long long int num)
{ 
  if(num<2)
    return num;
  if(pos+1==2*target)
  {
    return num%2;
  }
  num/=2;
  pos/=2;   
  if(target>pos+1)
      target-=(pos+1);      
  return is_one(pos,target,num);
}
int main()
{
  long long int l,r,n,x,ans=0,i;
  cin>>n>>l>>r;
  x=cnt(n);
  x=2*x-1;
  for(i=l; i<=r; i++)  ans+=is_one(x,i,n);
  cout<<ans<<endl;  
  return 0;
}
*/