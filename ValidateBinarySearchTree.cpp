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
    bool isValidBST(TreeNode *root)
    {
        if(root == NULL)
            return true;
        return valid(root->left,INT_MIN,root->val) && 
            valid(root->right,root->val,INT_MAX);
    }

    bool valid(TreeNode *node,int start,int limit)
    {
        if(node == NULL)
            return true;
        if(node->val >= limit || node->val <= start)
            return false;
        return valid(node->left,start,node->val) && 
            valid(node->right,node->val,limit);
    }
};

int main()
{

}

