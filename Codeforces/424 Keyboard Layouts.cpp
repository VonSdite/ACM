#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(int argc, char const *argv[])
{
    string layout1, layout2;
    unordered_map<char, char> letterMap;
    string tmp;
    while (cin >> layout1 >> layout2 >> tmp)
    {
        letterMap.clear();
        for (int i = 0; i < 26; ++i)
        {
            letterMap[layout1[i]] = layout2[i];
            letterMap[layout1[i] & 0B11011111] = layout2[i] & 0B11011111;
        }

        size_t len = tmp.length();
        for (size_t i = 0; i < len; ++i)
        {
            if(letterMap[tmp[i]]) printf("%c", letterMap[tmp[i]]);
            else printf("%c", tmp[i]);
        }
        printf("\n");
    }
    return 0;
}