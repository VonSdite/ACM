#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
typedef pair<int, int> p;
int dx[] = { 1, -1, 0, 0 };
int dy[] = { 0, 0, 1, -1 };
int n, m;
int r1, c1, r2, c2;
char a[520][520];

int bfs()
{
    queue<p> q;
    q.push(p(r1, c1));
    a[r1][c1] = 'X';              //第一步上去冰块已碎
    while (!q.empty())
    {
        r1 = q.front().first;
        c1 = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int xx = r1 + dx[i];
            int yy = c1 + dy[i];
            if ( xx < 0 || xx >= n || yy < 0 || yy >= m)
                continue;
            if (a[xx][yy] == 'X')
            {
                //到达点也会碎
                if (xx == r2 && yy == c2)
                    return 1;
                continue;
            }
            a[xx][yy] = 'X';   //走了之后就变成易碎的冰块
            q.push(p(xx, yy));
        }
    }
    return 0;
}

int main()
{
    int ans;
    while (cin >> n >> m)
    {
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cin >> r1 >> c1 >> r2 >> c2;
        r1--;       //用的二维数组是从0~n-1，而输入的是1~n,所以都要减1
        c1--;
        r2--;
        c2--;
        ans = bfs();
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}