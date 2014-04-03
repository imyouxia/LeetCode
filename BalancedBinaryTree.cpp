#include <iostream>
#include <cstdlib>

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
	bool isBalanced(TreeNode *root)
	{
		if(root == NULL)
			return true;
		if(abs(height(root->left)-height(root->right)) > 1)
			return false;
		return isBalanced(root->left) && isBalanced(root->right); 		
	}	
	
	int height(TreeNode *h)
	{
		if(h == NULL)
			return 0;
		return 1 + max(height(h->left),height(h->right));
	}	

};


int main()
{
	Solution solution;
	TreeNode *p;
	p = new TreeNode(1);
	p->left = new TreeNode(2);
	p->right = new TreeNode(2);
	p->left->left = new TreeNode(3);
	p->left->left->left = new TreeNode(4);

	cout<<solution.isBalanced(p)<<endl;
	return 0;	
}

