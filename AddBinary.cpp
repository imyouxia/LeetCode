#include <iostream>

using namespace std;

class Solution
{
public:
	string addBinary(string a,string b)
	{
		string value;

		int flag = 0;
		int i = a.size() - 1;
		int j = b.size() - 1;
		while(i >= 0 && j >= 0)
		{
			int num = a[i] - '0' + (b[j] - '0') + flag;
			//cout<< b[j] << endl;
			flag = num / 2;
			num = num % 2;

			value = (char)(num + '0') + value;
			//cout<<value<<endl;	
			i--;
			j--;
		}

		while(i >= 0)
		{
			int num = a[i] - '0' + flag;
			flag = num / 2;
			num  = num % 2;
			value = (char)(num + '0') + value;
	
			i--;	
		}
	
		while(j >= 0)
		{
			int num = b[j] - '0' + flag;
			flag = num / 2;
			num = num % 2;
			
			value = (char)(num + '0') + value;
		
			j--;
		}

		if(flag > 0)
			value = (char)(flag + '0') + value;
		return value;
	}

};

int main()
{
	Solution solution;
	string a,b;

	a = "11";
	b = "1";

	cout << solution.addBinary(a,b)<<endl;
	return 0;
}
