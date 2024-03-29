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
private:
    ListNode* reversedLL(ListNode* head) {
        // base case
        if(head == NULL || head -> next == NULL) {
            return head;
        }
        
        ListNode* newHead = reversedLL(head -> next);
        head -> next -> next = head;
        head -> next = NULL;
        return newHead;
    }
public:
    ListNode* reverseList(ListNode* head) {
        return reversedLL(head);
    }
};