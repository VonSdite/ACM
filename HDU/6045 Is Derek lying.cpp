#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int testn;
    scanf("%d", &testn);

    int n, x, y;
    string D, A;
    while (testn--)
    {
        scanf("%d %d %d", &n, &x, &y);
        cin >> D;
        cin >> A;
        int cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            if (D[i] != A[i]) ++cnt;
        }
        int ymin = max(x - cnt, 0);
        int ymax = min(n - cnt, x) + min(cnt, n - x);
        // printf("%d %d\n", ymin, ymax);
        if (y >= ymin && y <= ymax) printf("Not lying\n");
        else printf("Lying\n");
    }
    return 0;
}