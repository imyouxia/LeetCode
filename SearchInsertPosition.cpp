#include <iostream>

using namespace std;

class Solution
{
public:
	int searchInsert(int A[],int n,int target)
	{
		int i = 0;
		int j = n -1;
		int mid;
		while(i <= j)
		{
			mid = (i + j) / 2;
			if(A[mid] == target)
				return mid;
			if(A[mid] < target)
				i = mid + 1;
			else
				j = mid - 1;
		}
		return i;
			
	}
};

int main()
{
	Solution solution;
	int A[] = {1,3,5,6};
	cout<<solution.searchInsert(A,4,5)<<endl;
	cout<<solution.searchInsert(A,4,2)<<endl;
	return 0;
}

