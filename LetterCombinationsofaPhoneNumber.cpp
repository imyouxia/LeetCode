#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Solution
{
public:
	vector<string> letterCombinations(string digits)
	{
		int len = digits.size();
		result.clear();
		num[2] = "abc";
		num[3] = "def";
		num[4] = "ghi";
		num[5] = "jkl";
		num[6] = "mno";
		num[7] = "pqrs";
		num[8] = "tuv";
		num[9] = "wxyz";
		solve(digits,0,len);
		return result;
	}
	
	void solve(string &digits,int i,int len)
	{
		if(i == len)
		{
			str[len] = '\0';
			string temp = str;
			result.push_back(temp);
			return;
		}
		unsigned int j;
		int index = digits[i] - '0';
		for(j = 0; j < num[index].size(); j++)
		{
			str[i] = num[index][j];
			solve(digits,i+1,len);
		}
	}
private:
	vector<string> result;
	string num[10];
	char str[1000];
};

int main()
{
	Solution solution;
	string p;
	p = "23";
	vector<string> p1;
	p1 = solution.letterCombinations(p);
	vector<string>::iterator iter;
	
	for(iter=p1.begin();iter != p1.end();iter++)
	{
		cout<<*iter<<endl;
	}
	return 0;
}

