#include "iostream"
#include "map"
using namespace std;
map<int,int>building;
map<int,int>::iterator corect;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		building.clear();
		int n, tmp;
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			cin>>tmp;
			building[tmp]++;
		}
		int max=0;
		for (corect = building.begin(); corect != building.end(); ++corect)
		{
			if(corect->second>max) max=corect->second;
		}
		cout<<max<<endl;
	}
	return 0;
}