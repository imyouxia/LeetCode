#include <iostream>
#include <stack>
#include <algorithm>
#include <string>

using namespace std;

class Solution
{
public:
	int longestValidParentheses(string s)
	{
		stack<int> parenthes;
		int val = 0,count = 0;
		unsigned int i;
		for(i = 0; i < s.size(); i++)
		{
			if(s[i] == '(')
			{
				parenthes.push(count);
				count = 0;
			}
			else if(!parenthes.empty())
			{
				count = count + 1 + parenthes.top();
				parenthes.pop();
				val = max(val,count);
			}
			else
			{
				count = 0;
			}
		}
		return val * 2;
	}
};

int main()
{
	Solution solution;
	cout<<solution.longestValidParentheses("(()")<<endl;
	cout<<solution.longestValidParentheses("()()")<<endl;
   	cout<<solution.longestValidParentheses(")()()")<<endl;	
	cout<<solution.longestValidParentheses("(())")<<endl;	
	
	return 0;
}

