#include <iostream>

using namespace std;

class Solution
{
	public:
		int removeElement(int A[],int n,int elem)
		{
			int i,j=0;
			for(i = 0; i < n; i++)
			{
				if(A[i] != elem)
				{
					A[j++] = A[i];
				}

			}
			return j;

		}

};

int main()
{
	Solution test;
	int A[] = {1,2,3,4,5};
	std::cout<<test.removeElement(A,5,3)<<std::endl;
	return 0;	
}

