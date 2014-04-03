#include <iostream>
#include <cstring>

using namespace std;

class Solution
{
	public:
		int lengthOfLastWord(const char *s)
		{
			if(s == NULL || *s == '\0')
				return 0;
			int N,length = 0;
			N = strlen(s);
			int i = N - 1;
			while(i >= 0 && isspace(s[i]))
			{
				i--;
			}

			while(i >= 0 && !isspace(s[i]))
			{
				i--;
				length++;
			}
			return length;
		}

};

int main()
{
	Solution test;
	const char *s = "Hello World";
	cout<<test.lengthOfLastWord(s)<<endl;
	return 0;
	
}

