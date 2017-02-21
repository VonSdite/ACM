#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int c;
	cin>>c;
	while(c--)
	{
		int n;
		cin>>n;
		int gp1, gp2, gp3;
		gp1=n/2;
		gp2=(n-gp1)*2/3;
		gp3=n-gp1-gp2;
		int cnt=0;
		if(gp1%10)
		{
			cnt+=gp1/10;
			cnt++;
		}
		else cnt+=gp1/10;
		if(gp2%10)
		{
			cnt+=gp2/10;
			cnt++;
		}
		else cnt+=gp2/10;
		if(gp3%10)
		{
			cnt+=gp3/10;
			cnt++;
		}
		else cnt+=gp3/10;
		cout<<cnt<<endl;
	}
	return 0;
}