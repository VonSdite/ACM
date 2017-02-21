#include <iostream>
#include <string>
#include <iterator>

using namespace std;

int main(int argc, char const *argv[])
{
	size_t k;
	string s;
	while(cin >> s) 
	{
	    cin >> k;
	    size_t len = s.length();
	    if(len % k) printf("NO\n");
	    else
	    {
	    	k = len / k;
	    	bool flag = false;
	    	for (size_t i = 0; i < len; i+=k)
	    	{
	    		string tmp = s.substr(i, k);
	    		size_t tm_len = tmp.length();
	    		size_t k = tm_len/2;

	    		--tm_len;
	    		for (size_t j = 0; j < k; ++j)
	    		{
	    			if(tmp[j] != tmp[tm_len-j]) 
	    			{
	    				printf("NO\n");
	    				flag = true;
	    				break;
	    			}
	    		}
	    		if(flag) break;
	    	}
	    	if(!flag) printf("YES\n");
	    }
	}
	return 0;
}