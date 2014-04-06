#include <iostream>

using namespace std;

class Solution
{
public:
	void merge(int A[],int m,int B[],int n)
	{
		int i = m - 1;
		int j = n - 1;
		int k = m + n - 1;

		while(k >= 0)
		{
			if(j == -1 || (i >= 0 && A[i] >= B[j]))
				A[k--] = A[i--];
			else
				A[k--] = B[j--];
		}
	}
};

int main()
{
	int A[2] = {1};
	int B[1] = {2};
	Solution solution;
	solution.merge(A,1,B,1);
	int i;
	for(i = 0; i < 2; i++)
	{
		cout<<A[i]<<" ";
	}
	cout<<endl;
	return 0;
}

