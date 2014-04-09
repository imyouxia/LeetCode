#include <iostream>
#include <queue>

using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL)
	{
	
	}
};

class compare
{
public:
	bool operator()(ListNode *a,ListNode *b)
	{
		return a->val > b->val;
	}
};

class Solution
{
public:
	 ListNode *mergeKLists(vector<ListNode *> &lists)
	 {
		priority_queue<ListNode *,vector<ListNode *>,compare> q;
		int i;
		for(i = 0; i < lists.size(); ++i)
		{
			if(lists[i])
			{
				q.push(lists[i]);
			}
		}

		ListNode *head = NULL,*prev = NULL;
		ListNode *temp;
		while(!q.empty())
		{
			temp = q.top();
			q.pop();
			if(prev == NULL)
			{
				head = temp;
			}	
			else
			{
				prev->next = temp;
			}
			prev = temp;
			
			if(temp->next != NULL)
			{
				q.push(temp->next);
			}
		
		}
		return head;
	 }
};

int main()
{

}
