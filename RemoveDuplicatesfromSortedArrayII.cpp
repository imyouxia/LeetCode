#include <iostream>

using namespace std;

class Solution
{
public:
	int removeDuplicates(int A[],int n)
	{
		if(n < 3)
			return n;
		int i;
		int j = 2;
		for(i = 2; i < n; i++)
		{
			if(A[i] != A[j - 1] || A[i] != A[j - 2])
				A[j++] = A[i];
		}
		return j;
	}		
};

int main()
{
	Solution solution;
	int A[] = {1,1,1,2,2,3};
	cout<<solution.removeDuplicates(A,6)<<endl;
	return 0;
}

