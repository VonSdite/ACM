#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int _K=50268147,_B=6082187,_P=100000007;
int _X;
inline int get_rand(int _l,int _r){
	_X=((long long)_K*_X+_B)%_P;
	return _X%(_r-_l+1)+_l;
}
int n,m,k,seed;
int x[1000006],y[1000006];
bool flag1[1000006];
bool flag2[1000006];
int cnt1;
int cnt2;
void Init(){
	scanf("%d%d%d%d",&n,&m,&k,&seed);
	_X=seed;
	for (int i=1;i<=k;++i)
	{
		x[i]=get_rand(1,n);
		if(flag1[x[i]] == 0)
		{
			++flag1[x[i]];
			++cnt1;
		}
		y[i]=get_rand(1,m);
		if(flag2[y[i]] == 0)
		{
			++flag2[y[i]];
			++cnt2;
		}
	}
}

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);

	while (t--)
	{
		memset(flag1, 0, sizeof(flag1));
		memset(flag2, 0, sizeof(flag2));
		cnt1 = cnt2 = 0;
		Init();
		printf("%d %d\n", n-cnt1, m-cnt2);
	}

	return 0;
}