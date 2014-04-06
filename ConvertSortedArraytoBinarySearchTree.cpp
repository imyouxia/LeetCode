#include <iostream>
#include <vector>

using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x):val(x),left(NULL),right(NULL)
	{
	
	}
};

class Solution
{
public:
	TreeNode *sortedArrayToBST(vector<int> &num)
	{
		return buildBST(num,0,num.size()-1);
	}

	TreeNode *buildBST(vector<int> &num, int start,int end)
	{
		if(start > end)
			return NULL;
		int mid = (start + end) / 2;

		TreeNode *root = new TreeNode(num[mid]);
		root->left = buildBST(num,start,mid-1);
		root->right = buildBST(num,mid+1,end);

		return root;
	}
};

int main()
{
	int A[] = {1,2,3,4,5};
	vector<int> m(A,A+5);
	Solution solution;
	TreeNode *p;
	p = solution.sortedArrayToBST(m);
	return 0;
}
