#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n, w, d, result;
	while(cin>>n>>w>>d>>result)
	{
		int ans=((n-1)*n/2*w-result)/d;
		if(ans==0) cout<<n<<endl;
		else cout<<ans<<endl;
	}
	return 0;
}