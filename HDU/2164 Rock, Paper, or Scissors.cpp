#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int t;cin>>t;
	while(t--)
	{
		int n, c1=0, c2=0;
		cin>>n;
		char p1, p2;
		for (int i = 0; i < n; ++i)
		{
			cin>>p1>>p2;
			if((p1=='R'&&p2=='S')||(p1=='S'&&p2=='P')||(p1=='P'&&p2=='R')) c1++;
			else if(p1==p2);
			else c2++;
		}
		if(c1>c2) cout<<"Player 1\n";
		else if(c1<c2) cout<<"Player 2\n";
		else cout<<"TIE\n";
	}
	return 0;
}