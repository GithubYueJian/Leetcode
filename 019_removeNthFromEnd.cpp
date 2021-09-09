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
 int getlength(ListNode* head)
 {
	 int lenth{ 0 };
	 ListNode* p = head;
	 while (p)
	 {
		 lenth++;
		 p = p->next;
	 }
	 return lenth;
 }

ListNode* removeNthFromEnd(ListNode* head, int n) {
	 int length = getlength(head);
	 ListNode* dummy = new ListNode(0, head);
	 int NthFromStart = length - n + 1;
	 ListNode* p = dummy;
	 for (int i = 1; i < NthFromStart; i++)
		 p = p->next;

	 p->next = p->next->next;
	 return dummy->next;
 }
};
