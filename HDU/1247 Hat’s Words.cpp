#include "iostream"
#include "cstdio"
#include "cstring"
using namespace std;

const int MAXN=26;
const int MAX=50005;
char word[MAX][27];

struct node
{
	bool is;
	node *next[MAXN];
	node()
	{
		is=false;
		memset(next,0,sizeof(next));
	}
};
	
void Insert(node *rt, char *s)
{
	int i=0;
	node *p=rt;
	while(s[i])
	{
		int k=s[i++]-'a';
		if(p->next[k]==NULL) p->next[k]=new node();
		p=p->next[k];
	}
	p->is=true;
}

bool Search(node *rt, char *s)
{
	int i=0, top=0, stack[1000];
	node *p=rt;
	while(s[i])
	{
		int k=s[i++]-'a';
		if(p->next[k]==NULL) return 0;
		p=p->next[k];
		if(p->is&&s[i]) stack[top++]=i;
	}
	while(top)
	{
		bool ok=1;
		i=stack[--top];
		p=rt;
		while(s[i])
		{
			int k=s[i++]-'a';
			if(p->next[k]==NULL)
			{
				ok=false;
				break;
			}
			p=p->next[k];
		}
		if(ok&&p->is) return 1;
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	int i=0;
	node *rt=new node();
	while(gets(word[i]))
	{
		Insert(rt,word[i]);
		i++;
	}
	for (int j = 0; j < i; ++j)
	{
		if(Search(rt,word[j]))
			printf("%s\n", word[j]);
	}
	return 0;
}