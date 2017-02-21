#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n, m;
	char  a[101][101];
	cin>>n>>m;
	int flag=0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin>>a[i][j];
			if(a[i][j]=='C'||a[i][j]=='M'||a[i][j]=='Y')
			{
				flag++;
				break;
			}
		}
	}
	if(flag) cout<<"#Color"<<endl;
	else cout<<"#Black&White"<<endl;
	return 0;
}