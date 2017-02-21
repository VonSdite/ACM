#include "iostream"
#include "cstring"
using namespace std;
char a[15][15], c[15][15];
int main(int argc, char const *argv[])
{
	int n, m;
	while(cin>>n>>m)
	{
		m%=4;
		if(m==-1) m=3;
		else if(m==-2) m=2;
		else if(m==-3) m=1;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		switch(m)
		{
			case 0:
				for (int i = 0; i < n; ++i)
				{
					cout<<a[i]<<endl;
				}
				break;
			case 1:
				for (int i = 0; i < n; ++i)
				{
					for (int j = n-1; j >=0 ; j--)
					{
						cout<<a[j][i];
					}
					cout<<endl;
				}
				break;
			case 2: 
				for (int i = n-1; i >=0; i--)
				{
					for (int j = n-1; j >=0; j--)
					{
						cout<<a[i][j];
					}
					cout<<endl;
				}
				break;
			case 3:
				for (int i = n-1; i >=0; i--)
				{
					for (int j = 0; j <n; j++)
					{
						cout<<a[j][i];
					}
					cout<<endl;
				}
				break;
		}
	}
	return 0;
}