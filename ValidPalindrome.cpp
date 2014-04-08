#include <iostream>
#include <cctype>

using namespace std;

class Solution
{
public:
	bool isPalindrome(string s)
	{
		int i;
		int j = s.size() - 1;

		for(i = 0; i < j; i++,j--)
		{
			while(i < j && !isalnum(s[i]))
				i++;
			while(i < j && !isalnum(s[j]))
				j--;
			
			if(tolower(s[i]) != tolower(s[j]))
				return false;	

		}
		return true;	
	}

};

int main()
{
	Solution solution;
	cout<<solution.isPalindrome("A man,a plan,a canal:Panama")<<endl;
	cout<<solution.isPalindrome("ABA")<<endl;
	cout<<solution.isPalindrome("race a car")<<endl;
	
	return 0;
}


