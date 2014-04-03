#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	vector<int> plusOne(vector<int> &digits)
	{
		int i;
		for(i = digits.size() - 1; i >= 0; i--)
		{
			if(digits[i] != 9)
			{
				++digits[i];
				return digits;
			}
			else
			{
				digits[i] = 0;
			}
		}
		
		if(i < 0)
		{
			digits.insert(digits.begin(),1);
		}
		return digits;		
	}

};

int main()
{
	Solution solution;
	vector<int> result;
    int a[] = {8,7,9};
	vector<int> array(a,a+3);
	//vector<int> array(3,9);
	result = solution.plusOne(array);
	int n = result.size();
	int i;
	for(i = 0; i < n; i++)
	{
		cout<<result[i];
	}
	cout<<endl;
	return 0;
}


