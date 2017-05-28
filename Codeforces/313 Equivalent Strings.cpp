#include <bits/stdc++.h>

using namespace std;

string a, b;

string smallest(string s) 
{
    int len = (int)s.length();
    if (len&1) return s;
    string s1 = smallest(s.substr(0, len/2));
    string s2 = smallest(s.substr(len/2, string::npos));
    if (s1 < s2) return s1 + s2;
    else return s2 + s1;
}

int main(int argc, char const *argv[])
{
    while (cin >> a >> b)
    {
        if(smallest(a) == smallest(b)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}