#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int map[100][100];
	while(t--)
	{
		int n, m, cnt=0;
		cin>>n>>m;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cin>>map[i][j];
				if(map[i][j]==1) cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}