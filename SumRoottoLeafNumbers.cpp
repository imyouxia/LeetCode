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
	int sumNumbers(TreeNode *root)
	{
		int sum = 0;
		sumNumbers2(root,0,sum);
		return sum;
	}

	void sumNumbers2(TreeNode * node,int num,int &sum)
	{
		if(node == NULL)
			return;
		num = num  + node->val;

		if(node->left == NULL && node->right == NULL)
		{
			sum = sum + num;
			return;
		}
	
		num = num * 10;

		sumNumbers2(node->left,num,sum);
		sumNumbers2(node->right,num,sum);
	}
};

int main()
{
	Solution solution;
	TreeNode *p;
	
	p = new TreeNode(1);
	p->left = new TreeNode(2);
	p->right = new TreeNode(3);

	cout<<solution.sumNumbers(p)<<endl;

	return 0;
}

