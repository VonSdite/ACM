#include <bits/stdc++.h>

using namespace std;

const int SIZE = 2e5 + 5;
char na[SIZE];

unordered_map<char, char *> letter;
unordered_map<int, char *> v;

int main(int argc, char const *argv[])
{
    int n, m;
    char x, y;
    char *tmp;
    for (int i = 0; i < 26; ++i)
    {
        letter['a'+i] = (char*)malloc(sizeof(char));
        *letter['a'+i] = 'a' + i;
    }
    while (~scanf("%d %d", &n, &m))
    {
        v.clear();
        memset(na, 0, sizeof(na));
        scanf("%s", na);
        for (int i = 0; i < n; ++i)
        {
            v[i] = letter[na[i]];
        }

        for (int i = 0; i < m; ++i)
        {
            getchar();
            scanf("%c %c", &x, &y);
            *letter[x] = y;
            *letter[y] = x;
            tmp = letter[x];
            letter[x] = letter[y];
            letter[y] = tmp;
        }

        for (int i = 0; i < n; ++i)
        {
            printf("%c", *v[i]);
        }
        printf("\n");
    }
    return 0;
}