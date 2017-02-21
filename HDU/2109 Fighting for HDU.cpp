#include "iostream"
#include "cstdlib"
using namespace std;
int cmp(const void *a, const void *b)
{
	return *(int*)a-*(int*)b;
}
int main(int argc, char const *argv[])
{
	int n, chn[1000], jap[1000];
	while(cin>>n&&n)
	{
		for (int i = 0; i < n; ++i)
		{
			cin>>chn[i];
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>jap[i];
		}
		qsort(chn,n,sizeof(int),cmp);
		qsort(jap,n,sizeof(int),cmp);
		int cnt1=0, cnt2=0;
		for (int i = 0; i < n; ++i)
		{
			if(chn[i]>jap[i]) cnt1+=2;
			else if(chn[i]<jap[i]) cnt2+=2;
			else if(chn[i]==jap[i])
			{
				cnt1++;
				cnt2++;
			}
		}
		cout<<cnt1<<" vs "<<cnt2<<endl;
	}
	return 0;
}