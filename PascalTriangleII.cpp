#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	vector<int> getRow(int rowIndex)
	{
		vector<int> value(rowIndex+1,1);
		int i,j;
		for(i = 2; i <= rowIndex; i++)
		{
			for(j = i - 1; j > 0; j--)
			{
				value[j] = value[j] + value[j - 1];
			}
		}
		return value;
	
	}

};

int main()
{

}
