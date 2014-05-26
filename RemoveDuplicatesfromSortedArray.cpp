#include <iostream>

using namespace std;

class Solution
{
	public:
		int removeDuplicates(int a[],int n)
		{
			if(n < 2)
				return n;
			int j = 1;
			int i;
			for(i = 1; i < n; i++)
			{
				if(a[j - 1] != a[i])
					a[j++] = a[i];
			}
			return j;		
		}
};

int main()
{
	Solution test;
	int A[] = {1,1,2};
	std::cout<< test.removeDuplicates(A,3) <<std::endl;
	
	return 0;
}
