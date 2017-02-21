//有n行和m列。
//如果只看一行的话，它有多少个矩形呢？单个地数有m个，两个地数有m-1个……，m个地数有1个。
//每一行就有：1+2+3+……+m个=m * (m + 1) / 2。
//我们把每一行抽象成一个矩形，也就只剩一列了。一列的话，有:1+2+……+n=n * (n + 1) / 2个。
//总结起来，就有：=（1+m）*m/2*(1+n)*n/2那么多个了。

#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, m;
		cin>>n>>m;
		cout<<(n+1)*n*m*(m+1)/4<<endl;
	}
	return 0;
}