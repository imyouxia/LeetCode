#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
	vector<string> generateParenthesis(int n)
	{
		res.clear();
		generateParenthesis(n,n,"");
		return res;
	}

	void generateParenthesis(int left,int right,string s)
	{
		if(left == 0 && right == 0)
		{	
			res.push_back(s);
			return;
		}
		
		if(left > 0)
		{
			generateParenthesis(left - 1,right,s+"(");
		}
		
		if(right > left)
		{
			generateParenthesis(left,right - 1,s+")");
		}	
		
	}

private:
	vector<string> res;
};

int main()
{
	Solution solution;
	vector<string> p;
	p = solution.generateParenthesis(3);
	vector<string>::iterator iter;
	for(iter = p.begin();iter != p.end();iter++)
	{
		cout<<*iter<<" ";
	}
	cout<<endl;
	return 0;
}

