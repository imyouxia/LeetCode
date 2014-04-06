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
	vector< vector<int> > pathSum(TreeNode *root,int sum)
	{
		vector<int> path;
		vector< vector<int> > value;
		pathSum2(root,sum,path,value);
		return value;
	}

	void pathSum2(TreeNode *cur,int sum,vector<int> &path,vector< vector<int> > &value)
	{
		if(cur == NULL)
			return;
		sum = sum - cur->val;
		path.push_back(cur->val);
		if(cur->left == NULL && cur->right == NULL && sum == 0)
			value.push_back(path);
		pathSum2(cur->left,sum,path,value);
		pathSum2(cur->right,sum,path,value);

		path.pop_back();
	}
};

int main()
{
	Solution solution;
	TreeNode *p;
	int m;
	vector< vector<int> > p1;

	p = new TreeNode(5);
	p->left = new TreeNode(4);
	p->right = new TreeNode(8);
	p->left->left = new TreeNode(11);
	p->right->left = new TreeNode(13);
	p->right->right = new TreeNode(4);
	p->left->left->left = new TreeNode(7);
	p->left->left->right = new TreeNode(2);
	p->right->right->left = new TreeNode(5);
	p->right->right->right = new TreeNode(1);
	
	m = 22;

	p1 = solution.pathSum(p,m);
	
	vector< vector<int> >::iterator iter;
	vector<int>::iterator iter1;

	for(iter = p1.begin();iter != p1.end();iter++)
	{
		for(iter1 = (*iter).begin(); iter1 != (*iter).end(); iter1++)
		{
			cout<< *iter1 <<" ";
		}	
		cout<<endl;
	}
	cout<<endl;
}

