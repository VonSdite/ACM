#include <bits/stdc++.h>

using namespace std;

const int SIZE = 3e5 + 5;
int a[SIZE];

int main(int argc, char const *argv[])
{
    int n;
    while(~scanf("%d", &n))
    {
        priority_queue<int> q;
        int sum = n;
        int x;
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &x);
            q.push(x);
            while (!q.empty() && q.top() == sum)
            {
                sum--;
                q.pop();
            }
            if (i == 1)
                printf("1");
            printf(" %d", 1 + q.size());
        }
        printf("\n");
    }
    return 0;
}
