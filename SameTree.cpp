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
	bool isSameTree(TreeNode *p,TreeNode *q)
	{
		if(p== NULL && q == NULL)
			return true;
		if((p == NULL && q != NULL) || (p != NULL && q == NULL))
			return false;
		if(p->val != q->val)
			return false;
		return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);

	}

};

int main()
{
	Solution solution;
	TreeNode *p1,*p2;
	
	p1 = new TreeNode(12);
	p1->left = new TreeNode('#');
	p1->right = new TreeNode(-60);
	
	p2 = new TreeNode(12);
	p2->left = new TreeNode('#');
	p2->right = new TreeNode(72);

	cout<<solution.isSameTree(p1,p2)<<endl;
	
	return 0;
}
