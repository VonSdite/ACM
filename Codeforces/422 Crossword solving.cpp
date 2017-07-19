#include <iostream>

using namespace std;

const int SIZE = 1e3+5;
char s[SIZE];
char t[SIZE];

int main(int argc, char const *argv[])
{
    int n, m;
    while (~scanf("%d %d", &n, &m))
    {
        scanf("%s", s);
        scanf("%s", t);
        
        int pos = 0, suit = 0;
        int cnt;
        for (int i = 0; i <= m-n; ++i)
        {
            cnt = 0;
            int k = i;
            for (int j = 0; j < n; ++j, ++k)
            {
                if(s[j] == t[k]) ++cnt;
            }
            if(cnt > suit)
            {
                pos = i;
                suit = cnt;
            }
        }

        printf("%d\n", n-suit);
        for (int i = 0, k = pos; i < n; ++i, ++k)
        {
            if(s[i] != t[k]) printf("%d ", i+1); 
        }
        printf("\n");
    }
    return 0;
}