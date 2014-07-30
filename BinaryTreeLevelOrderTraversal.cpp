#include <iostream>
#include <vector>
#include <queue>

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
    vector<vector<int> > levelOrder(TreeNode *root)
    {
        return levelOrder1(root);
    }

    vector<vector<int> > levelOrder1(TreeNode *root)
    {
        vector<vector<int> > result;
        if(!root) return result;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int> temp;

        while(true)
        {
            TreeNode *node = q.front();
            q.pop();
            if(!node)
            {
                result.push_back(temp);
                temp.clear();
                if(q.empty())
                    break;
                q.push(NULL);
            }
            else
            {
                temp.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
        }
    
    return result;
    }
};

int main()
{

}

