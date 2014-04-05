#include <iostream>

using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL)	
	{
	
	}
};

class Solution
{
public:
	ListNode *swapPairs(ListNode *head)
	{
		if(head == NULL || head->next == NULL)
			return head;
		ListNode *nextNode = head->next;
		head->next = swapPairs(nextNode->next);
		nextNode->next = head;
		return nextNode;	
	}

};

int main()
{
	Solution solution;
	ListNode *head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	head = solution.swapPairs(head);

	while(head != NULL)
	{
		cout<<head->val << " ";
		head = head->next;
	}
	cout<<endl;
	return 0;
}

