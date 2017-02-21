#include "iostream"
#include "iomanip"
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		double u, v, w, l, t;
		cin>>u>>v>>w>>l;
		t=l/(u+v);
		cout<<setiosflags(ios::fixed)<<setprecision(3)<<w*t<<endl;
	}
	return 0;
}