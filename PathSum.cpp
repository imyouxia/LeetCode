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
	bool hasPathSum(TreeNode *root,int sum)
	{
		if(root == NULL)
			return false;
		sum = sum - root->val;
		
		if(root->left == NULL && root->right == NULL)
			return (sum == 0);
		return hasPathSum(root->left,sum) || hasPathSum(root->right,sum);		
	}
};

int main()
{
	Solution solution;
	TreeNode *p;
	p = new TreeNode(5);
	p->left = new TreeNode(4);
	p->left->left = new TreeNode(11);
	p->left->left->left = new TreeNode(7);
	p->left->left->right = new TreeNode(2);

	p->right = new TreeNode(8);
	p->right->left = new TreeNode(13);
	p->right->right = new TreeNode(4);
	p->right->right->right = new TreeNode(1);

	cout<<solution.hasPathSum(p,22)<<endl;
	return 0;
}

