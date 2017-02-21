#include "iostream"
#include "string"
#include "cstring"
#include "cstdlib"
using namespace std;
struct player_type
{
	string name;
	string time;
}player[20];
int cmp(const void *a, const void *b)
{
	player_type *c=(player_type*)a;
	player_type *d=(player_type*)b;
	if(c->time==d->time) return (c->name>d->name)?1:-1;
	else return (c->time>d->time)?1:-1;
}
int main(int argc, char const *argv[])
{
	int n, t=1;
	while(cin>>n&&n)
	{
		for (int i = 0; i < n; ++i)
		{
			cin>>player[i].name>>player[i].time;
		}
		qsort(player,n,sizeof(player_type),cmp);
		if(t!=1) cout<<endl;
		cout<<"Case #"<<t++<<endl;
		int cnt=1, cnt2=1;
		for (int i = 0; i < n; ++i)
		{
			cout<<player[i].name<<' ';
			if(i!=0&&player[i].time==player[i-1].time) cout<<cnt<<endl;
			else if(i==0) cout<<cnt<<endl;
			else if(i!=0&&player[i].time!=player[i-1].time) 
			{
				cout<<cnt2<<endl;
				cnt=cnt2;
			}
			cnt2++;
		}
	}
	return 0;
}