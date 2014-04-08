#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	vector< vector<int> > generate(int numRows)
	{
		vector< vector<int> >value;
		int i,j;
		for(i = 0; i < numRows; i++)
			value.push_back(vector<int>(i+1,1));

		for(i = 2; i < numRows; i++)
		{
			for(j = 1; j < i; j++)
			{
				value[i][j] = value[i - 1][j - 1] + value[i - 1][j];
			}
		}
		return value;
	
	}
};

int main()
{


}
