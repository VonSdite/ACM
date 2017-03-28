#include <iostream>
#include <cstdlib>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, k;
	while(~scanf("%d %d", &n, &k))
	{
		map<int, int>hash;
		map<int, bool>flag;
		int temp;
		int tmp = 0;
		int cnt;
		int nn = n;
		int record;
		for (int i = 0; i < k; ++i)
		{
			if(i == 0)
			{
				for (int i = 0; i < n; ++i)
				{
					hash[i] = i;
				}
				scanf("%d", &temp);
				tmp = temp % n;
				printf("%d", hash[tmp]+1);
				++flag[hash[tmp]];
				n--;
			}
			else
			{
				record = hash[tmp];
				++flag[hash[tmp]];
				cnt = 0;
				for (int i = record+1; i < nn; ++i)
				{
					if(!flag[i])
					{
						hash[cnt++] = i;
					}
				}
				for (int i = 0; i < record; ++i)
				{
					if(!flag[i])
					{
						hash[cnt++] = i;
					}
				}
				scanf("%d", &temp);
				tmp = temp % n;
				printf(" %d", hash[tmp]+1);
				n--;
			}
		}
		printf("\n");
	}
	return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// struct Node
// {
// 	int data;
// 	Node *next;
// 	Node *prior;
// };

// typedef Node* LinkList;

// void InitList(LinkList &L, int size)
// {
// 	LinkList p = L;
// 	LinkList q = NULL;

// 	int cnt = 1;
// 	while(size)
// 	{
// 		q = (LinkList)malloc(sizeof(Node));
// 		q->data = cnt++;
// 		p->next = q;
// 		q->prior = p;
// 		p = q;
// 		--size;
// 	}
// 	p->next = L->next;
// 	L->next->prior = p;
// 	L = L->next; 
// }

// void Solve(LinkList &L, int &m, int &n)
// {
// 	int tmp = m % n;
// 	if(tmp) 
// 	{
// 		--tmp;
// 		while(tmp)
// 		{
// 			L = L->next;
// 			--tmp;
// 		}
// 		LinkList p = L->next;
// 		printf("%d ", p->data);
// 		L->next = p->next;
// 		p->next->prior = L;
// 		L = p->next;
// 		free(p);
// 	}
// 	else
// 	{
// 		printf("%d ", L->data);
// 		LinkList p = L;
// 		p->prior->next = p->next;
// 		p->next->prior = p->prior;
// 		L = p->next;
// 		free(p);
// 	}
// 	n--;
// }

// void SeeList(LinkList &L)
// {
// 	LinkList p = L;
// 	while (p->next != L)
// 	{
// 		printf("%d ", p->data);
// 		p = p->next;
// 	}
// 	printf("%d ", p->data);
// }


// int main(int argc, char const *argv[])
// {
// 	int n, k;
// 	while (~scanf("%d %d", &n, &k))
// 	{
// 		LinkList L = (LinkList)malloc(sizeof(Node));
// 		InitList(L, n);

// 		// SeeList(L);
// 		int tmp;
// 		for (int i = 0; i < k; ++i)
// 		{
// 			scanf("%d", &tmp);
// 			Solve(L, tmp, n);
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }
