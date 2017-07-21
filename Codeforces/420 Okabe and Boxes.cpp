#include <iostream>
#include <list>
#include <string>

using namespace std;

list<string> command;

int main(int argc, char const *argv[])
{
    int n, nextRemove, ans;
    string tmp;
    while (~scanf("%d", &n))
    {
        getchar();
        command.clear();
        nextRemove = 1;
        ans = 0;
        for (int i = 0; i < 2 * n; ++i)
        {
            getline(cin, tmp);
            if(tmp == "remove")
            {
                if(!command.empty())
                {
                    if(command.back()[4]-'0' != nextRemove)
                    {
                        ++ans;
                        command.clear();
                    }
                    else
                    {
                        list<string>::iterator iter = command.end();
                        --iter;
                        command.erase(iter);
                    }
                }
                ++nextRemove;
            }
            else
            {
                command.push_back(tmp);
            }
        }

        printf("%d\n", ans);
    }
    return 0;
}