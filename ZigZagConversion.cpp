#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Solution
{
public:
	string convert(string s,int nRows)
	{
		if(nRows <= 1)
		{
			return s;
		}

		string *array = new string[nRows];
		int n = nRows + nRows -2;
		int i;
		int j = 0;
		for(i = 0; i < s.length(); i++)
		{
			j = nRows - 1 -abs(nRows - 1 -i %n);
			array[j].push_back(s[i]);
		}
		
		string result;
		for(i = 0; i < nRows; i++)
			result.append(array[i]);
		return result;
	}
};

int main()
{

}
