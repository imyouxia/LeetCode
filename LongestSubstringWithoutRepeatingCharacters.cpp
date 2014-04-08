#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Solution
{
public:
	int lengthOfLongestSubstring(string s)
	{
		bool value[256];
		memset(value,false,sizeof(value));

		int res = 0;
		int start = 0,end = 0,len = s.size();

		while(end < len)
		{
			if(!value[s[end]])
				value[s[end++]] = true;
			else
				value[s[start++]] = false;
			res = max(end - start,res);
		}
		return res;
	}

};

int main()
{
	Solution solution;
	cout << solution.lengthOfLongestSubstring("abcabcbbb")<<endl;
	cout << solution.lengthOfLongestSubstring("bbbbb")<<endl;
	
	return 0;
}

