/*思路：推导公式，过程如下：

1.tan(a+b) = ( tan(a) + tan(b) ) / (1 – tan(a) * tan(b) )

2.tan( atan(x) ) = x
arctan(1/s) = arctan(1/u)+arctan(1/v)
所以得1/s = tan( arctan(1/u)+arctan(1/v) ) = (tan(arctan(1/u)) + tan(arctan(1/v)))/(1-tan(arctan(1/u))*tan(arctan(1/v))) = (1/u + 1/v) / (1 - 1/(uv))
所以解得 uv = 1 + us + vs

最后可以推出，无论输入什么，结果都是1。。。。

（用int取整有误差，不推荐。）*/

#include "iostream"
#include "cmath"
#include "iomanip"
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		double s, u, v;
		cin>>s>>u;
		v=1/tan(atan(1/s)-atan(1/u));
		double ans=v*u-s*u-s*v;
		cout<<setiosflags(ios::fixed)<<setprecision(0)<<ans<<endl;
	}
	return 0;
}