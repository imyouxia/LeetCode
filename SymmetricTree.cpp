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
	bool isSymmetric(TreeNode *root)
	{
		if(root == NULL)
			return true;
		return isSymmetric2(root->left,root->right);
	}

	bool isSymmetric2(TreeNode *p,TreeNode *q)
	{
		if(p == NULL && q == NULL)
			return true;
		if((p == NULL && q != NULL) || (p != NULL && q == NULL))
			return false;
		if(p->val != q->val)
			return false;
		return isSymmetric2(p->left,q->right) && isSymmetric2(p->right,q->left);
	}

};

int main()
{
	Solution solution;
	TreeNode *p;

	{	
		p = new TreeNode(1);
		p->left = new TreeNode(2);
		p->right = new TreeNode(2);
		p->left->left = new TreeNode(3);
		p->left->right = new TreeNode(4);
		p->right->left = new TreeNode(4);
		p->right->right = new TreeNode(3);

		cout<<solution.isSymmetric(p)<<endl;
	}

	{
		p = new TreeNode(1);
		p->left = new TreeNode(2);
		p->left->right = new TreeNode(3);
		p->right = new TreeNode(2);
		p->right->right = new TreeNode(3);

		cout<<solution.isSymmetric(p)<<endl;
	
	}
	return 0;
}



