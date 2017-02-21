#include "iostream"
using namespace std;
int stu[5000];
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n>>k;
		for (int i = 1; i <= n; ++i)
		{
			cin>>stu[i];
		}
		int cnt=0;
		for (int i = 1; i <= n; ++i)
		{
			if(i!=k&&stu[i]>stu[k]) cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}