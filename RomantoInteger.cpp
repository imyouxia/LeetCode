#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

class Solution
{
public:
	int romanToInt(string s)
	{
		
		map<char,int> roman;
		roman['M'] = 1000;
		roman['D'] = 500;
		roman['C'] = 100;
		roman['L'] = 50;
		roman['X'] = 10;
		roman['V'] = 5;
		roman['I'] = 1;
		
		/*
		unordered_map<char,int> roman = 
		{
			{'M',1000},
			{'D',500},
			{'C',100},
			{'L',50},
			{'X',10},
			{'V',5},
			{'I',1}
		
		};
		*/
		
		int value = 0;
		int n = s.size();
		int i;
		for(i = 0; i < n; i++)
		{
			if(i < n - 1 && roman[s[i]] < roman[s[i+1]])
				value = value -roman[s[i]];
			else
				value = value + roman[s[i]];
		}
		return value;
	}

};

int main()
{
	Solution solution;
	cout<<solution.romanToInt("DCXXI")<<endl;
	return 0;
}
