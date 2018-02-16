#include <iostream>
#include <cstdlib>

// *
//  * Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// 简洁快速版
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int a, b, c = 0;
        ListNode *p, *res;
        p = res = (ListNode *)malloc(sizeof(ListNode));
        while (l1 || l2)
        {
            a = l1 ? l1->val : 0;
            b = l2 ? l2->val : 0;
            int tmp = a + b + c;
            c = 0;
            if (tmp > 9)
            {
                tmp -= 10;
                c = 1;
            }
            p->next = new ListNode(tmp);
            p = p->next;

            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        if(c) p->next = new ListNode(1), p = p->next;
        p = res;
        res = res->next;
        free(p);
        return res;
    }
};

// 直接上来的想法 59ms过
// 就是模拟加法
/*class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = (ListNode *)malloc(sizeof(ListNode));
        ListNode *p, *q=head;
        ListNode *l;
        int c = 0;
        while (l1 != NULL && l2 != NULL)
        {
            p = (ListNode *)malloc(sizeof(ListNode));
            p->val = l1->val + l2->val + c;
            c = 0;
            if (p->val >= 10)
            {
                p->val -= 10;
                c = 1;
            }
            p->next = NULL;
            q->next = p;
            q = p;

            l1 = l1->next;
            l2 = l2->next;
        }

        if (l1 != NULL)
            l = l1;
        else l = l2;

        while (l != NULL)
        {
            p = (ListNode *)malloc(sizeof(ListNode));
            p->val = l->val + c;
            c = 0;
            if (p->val >= 10)
            {
                p->val -= 10;
                c = 1;
            }
            p->next = NULL;
            q->next = p;
            q = p;

            l = l->next;
        }

        if(c)
        {
            p = (ListNode *)malloc(sizeof(ListNode));
            p->val = c;
            p->next = NULL;
            q->next = p;
        }
        q = head;
        head = head->next;
        free(q);
        return head;
    }
};*/

int main(int argc, char const *argv[])
{
    ListNode a(2), b(4), c(3), d(5), e(6), f(4);
    a.next = &b;
    b.next = &c;
    d.next = &e;
    e.next = &f;
    ListNode *head = Solution().addTwoNumbers(&a, &d);
    while (head != NULL)
    {
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
    return 0;
}