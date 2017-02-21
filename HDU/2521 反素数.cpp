#include "iostream"
using namespace std;
int decimal(int n)
{
	if(n==1) return 1;
	int cnt=2;
	for (int i = 2; i*i <= n; ++i)
	{
		if(n%i==0)
		{
			if(n/i!=i) cnt+=2;
			else cnt++;
		}
	}
	return cnt;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n--)
	{
		int a, b;
		cin>>a>>b;
		int max=0, mx=0;
		for (int i = a; i <= b; ++i)
		{
			int k=decimal(i);
			if(k>max)
			{
				max=k;
				mx=i;
			}
		}
		cout<<mx<<endl;
	}
	return 0;
}