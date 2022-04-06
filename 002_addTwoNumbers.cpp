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
   ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int carry(0);
    ListNode* head = new ListNode(0);
    ListNode* currentNode = head;
    while (l1 && l2)
    {
        ListNode* newNode = new ListNode((l1->val + l2->val + carry) % 10);
        carry = (l1->val + l2->val + carry) / 10;
        currentNode->next = newNode;
        l1 = l1->next;
        l2 = l2->next;
        currentNode = currentNode->next;
        
    }
    while (l1)
    {
        ListNode* newNode = new ListNode((l1->val + carry) % 10);
        carry = ((l1->val + carry) / 10);
        currentNode->next = newNode;
        l1 = l1->next;
        currentNode = currentNode->next;
    }
    while (l2)
    {
        ListNode* newNode = new ListNode((l2->val + carry) % 10);
        carry = ((l2->val + carry) / 10);
        currentNode->next = newNode;
        l2 = l2->next;
        currentNode = currentNode->next;
    }
    if (carry)
    {
        ListNode* newNode = new ListNode(carry);
        currentNode->next = newNode;
        currentNode = currentNode->next;
    }
    return head->next;

}
};
