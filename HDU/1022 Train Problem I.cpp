#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

class Station
{
public:
	Station(const string &a, const string &b): a(a), b(b) {}
	string a, b;
	vector<string> res;
	bool solve()
	{
		if(a.size() != b.size()) return false;

		unsigned int i = 0, j = 0;
		stack<char> temp;

		while(i < a.size() || j < b.size())
		{
			if(!temp.empty() && temp.top() == b[j])
			{
				temp.pop();
				res.push_back("out");
				++j;
			}
			else
			{
				if(i == a.size()) return false;

				temp.push(a[i]);
				res.push_back("in");
				++i;
			}
		}

		return true;
	}
};

int main(int argc, char const *argv[])
{
	string a, b;
	int temp;
	while(cin >> temp >> a >> b)
	{
		Station test(a, b);
		if(test.solve())
		{
			cout << "Yes." << endl;
			for (auto i : test.res)
			{
				cout << i << endl;
			}
			cout << "FINISH" << endl;
		}
		else
		{
			cout << "No." << endl;
			cout << "FINISH" << endl;
		}
	}
	return 0;
}