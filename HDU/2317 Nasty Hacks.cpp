#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n--)
	{
		int r, e, c;
		cin>>r>>e>>c;
		int ad=e-c;
		if(r>ad) cout<<"do not advertise"<<endl;
		else if(r<ad) cout<<"advertise"<<endl;
		else cout<<"does not matter"<<endl;
	}
	return 0;
}