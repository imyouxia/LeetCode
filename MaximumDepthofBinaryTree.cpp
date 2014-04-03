#include <iostream>

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
	int maxDepth(TreeNode *root)
	{
		if(root == NULL)
			return 0;
		return 1 + max(maxDepth(root->left),maxDepth(root->right));
	}

};

int main()
{
	Solution solution;
	TreeNode *p;

	p = new TreeNode(1);
	p->left = new TreeNode(2);
	p->left->right = new TreeNode(3);
		
	cout<<solution.maxDepth(p)<<endl;
	return 0;
}


