#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	while(cin>>n&&n)
	{
		int r=0, y=0;
		char ball;
		for (int i = 0; i < n; ++i)
		{
			cin>>ball;
			switch(ball)
			{
				case 'R': r++;break;
				case 'Y': y++;break;
				case 'B': if(r==7) cout<<"Red"<<endl;
						  else cout<<"Yellow"<<endl;
						  break;
				case 'L': if(y==7) cout<<"Yellow"<<endl;
						  else cout<<"Red"<<endl;
						  break;
			}
		}
	}
	return 0;
}