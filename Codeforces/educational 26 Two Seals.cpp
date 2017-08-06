#include <bits/stdc++.h>

using namespace std;

const int SIZE = 105;
pair<int, int> point[SIZE];


int main(int argc, char const *argv[])
{
    int n, a, b;
    int x, y;
    while (~scanf("%d %d %d", &n, &a, &b))
    {
        for (int i = 0; i < n; ++i)
        {
            scanf("%d %d", &x, &y);
            point[i] = make_pair(x, y);
        }

        int MAX = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (point[i].first + point[j].first <= a \
                        && point[i].second <= b\
                        && point[j].second <= b)
                {
                    MAX = max(MAX, point[i].first*point[i].second \
                        + point[j].first*point[j].second);
                }

                if(point[i].first + point[j].second <= a \
                        && point[i].second <= b \
                        && point[j].first <= b)
                {
                    MAX = max(MAX, point[i].first*point[i].second \
                        + point[j].first*point[j].second);
                }

                if (point[i].first + point[j].first <= b \
                        && point[i].second <= a\
                        && point[j].second <= a)
                {
                    MAX = max(MAX, point[i].first*point[i].second \
                        + point[j].first*point[j].second);
                }
                
                if(point[i].first + point[j].second <= b \
                        && point[i].second <= a \
                        && point[j].first <= a)
                {
                    MAX = max(MAX, point[i].first*point[i].second \
                        + point[j].first*point[j].second);
                }

                // 5
                if (point[i].second + point[j].first <= a \
                        && point[i].first <= b\
                        && point[j].second <= b)
                {
                    MAX = max(MAX, point[i].first*point[i].second \
                        + point[j].first*point[j].second);
                }

                if(point[i].second + point[j].second <= a \
                        && point[i].first <= b \
                        && point[j].first <= b)
                {
                    MAX = max(MAX, point[i].first*point[i].second \
                        + point[j].first*point[j].second);
                }

                if (point[i].second + point[j].first <= b \
                        && point[i].first <= a\
                        && point[j].second <= a)
                {
                    MAX = max(MAX, point[i].first*point[i].second \
                        + point[j].first*point[j].second);
                }
                
                if(point[i].second + point[j].second <= b \
                        && point[i].first <= a \
                        && point[j].first <= a)
                {
                    MAX = max(MAX, point[i].first*point[i].second \
                        + point[j].first*point[j].second);
                }
            }
        }
        printf("%d\n", MAX);
    }
    return 0;
}