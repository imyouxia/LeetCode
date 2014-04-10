#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution
{
public:
	vector<string> anagrams(vector<string> &strs)
	{
		vector<string> ret;
		ret.clear();
		m.clear();
		int i;
		for(i = 0; i < strs.size(); i++)
		{
			string tmp = strs[i];
			sort(tmp.begin(),tmp.end());

			m[tmp].push_back(strs[i]);
		}

		for(map< string,vector<string> >::iterator iter = m.begin(); iter != m.end(); iter++)
		{
			if((iter->second).size() > 1)
			{
				for(vector<string>::iterator iter1 = (iter->second).begin();iter1 != (iter->second).end(); iter1++)
				{
					ret.push_back(*iter1);
				}
			}
		}
		return ret;
	
	}
private:
	map< string,vector<string> > m;
		
};

int main()
{


}
