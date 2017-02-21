#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n--)
	{
		int k, tmp, sum=0;
		cin>>k;
		for (int i = 0; i < k; ++i)
		{
			cin>>tmp;
			sum+=tmp;
		}
		sum-=k-1;
		cout<<sum<<endl;
	}
	return 0;
}