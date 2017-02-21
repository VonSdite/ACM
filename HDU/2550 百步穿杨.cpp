#include "iostream"
#include "cstdlib"
using namespace std;

struct jian_t
{
	int a;
	int b;
}jian[100];

int cmp(const void *a, const void *b)
{
	jian_t *c=(jian_t *)a;
	jian_t *d=(jian_t *)b;
	return c->a - d->a;
}

void zaojian(int n)
{
	for (int i = 0; i < n; ++i)
	{
		char c[100]=">+";
		int k;
		for ( k = 2; k < jian[i].a; ++k)
		{
			c[k]='-';
		}
		c[k++]='+';
		c[k++]='>';
		c[k]='\0';
		for (int j = 0; j < jian[i].b; ++j)
		{
			cout<<c<<endl;
		}
		cout<<endl;
	}
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			cin>>jian[i].a>>jian[i].b;
		}
		qsort(jian,n,sizeof(jian_t),cmp);
		zaojian(n);
	}
	return 0;
}