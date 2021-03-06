/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
	ListNode* head = new ListNode(0);
	ListNode* p = head;
	while (l1 != nullptr&&l2 != nullptr)
	{
		if (l1->val < l2->val)
		{
			p->next = l1;
			l1 = l1->next;
			p = p->next;
		}
		else
		{
			p->next = l2;
			l2 = l2->next;
			p = p->next;
		}

	}
	p->next = l1 == nullptr ? l2 : l1;

	return head->next;
}
};
