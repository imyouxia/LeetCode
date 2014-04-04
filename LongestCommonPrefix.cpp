#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
	string longestCommonPrefix(vector<string> &strs)
	{
		if(strs.size() == 0)
		{
			return "";
		}

		unsigned int length = strs[0].size();
		unsigned int i,j;

		for(i = 1; i < strs.size(); i++)
		{
			for(j = 0; j < strs[i].size(); j++)
			{
				if(j >= length || strs[i][j] != strs[0][j])
					break;
			
			}
			length = j;		
		}
		return strs[0].substr(0,length);
	}	

};

int main()
{
	Solution solution;
	vector<string> strArray(5);
	strArray[0] = "HelloOne";
	strArray[1] = "HelloTwo";
	strArray[2] = "HelloThree";
	strArray[3] = "HelloFour";
	strArray[4] = "HelloFive";
	cout<<solution.longestCommonPrefix(strArray)<<endl;
	return 0;

}

