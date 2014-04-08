#include <iostream>
#include <string>
#include <cmath>

using namespace std;

const string key[4][10] = {
		{"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
		{"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
		{"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
		{"", "M", "MM", "MMM"}
	};

class Solution 
{
public:
/*
    const string key[4][10] = {
		{"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
		{"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
		{"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
		{"", "M", "MM", "MMM"}
	};
*/
    string intToRoman(int num) 
	{
        string value;
        int i = 3;
        while (num > 0)
        {
            int div = (int)pow(10, i);
            value += key[i][num / div];
            num %= div;
            i--;
        }
        return value;
    }
};

int main()
{
	Solution solution;
	cout<<solution.intToRoman(3161)<<endl;
	return 0;
}
