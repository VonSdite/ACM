#include <iostream>  
#include <cstdio>  
#include <algorithm>  
#include <queue>  
using namespace std;  
  
const int MAXN = 1e3 + 111;  
  
int a, n, m, sum[MAXN];  
bool flag = 0, vis[MAXN];  
  
int main()  
{  
    scanf("%d%d", &n, &m);  
    vector<int> sum;  
    for (int i = 0; i < n; ++i)  
    {  
        scanf("%d", &a);  
        a %= m;  
        int len = sum.size();  
        for (int j = 0; j < len; ++j) // 更新vecotr数组  
        {  
            int newSum = (sum[j] + a) % m;  
            if (newSum == 0)  
            {  
                flag = 1;  
                goto ed;  
            }  
            if (!vis[newSum])  
            {  
                sum.push_back(newSum);  
                vis[newSum] = 1;  
            }  
        }  
        if (!vis[a]) // 别忘了要把这个数本身放进去  
        {  
            if (a == 0)  
            {  
                flag = 1;  
                break;  
            }  
            sum.push_back(a);  
            vis[a] = 1;  
        }  
    }  
ed:  
    if (flag) printf("YES\n");  
    else printf("NO\n");  
    return 0;  
}  