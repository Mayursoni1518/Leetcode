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
    ListNode* partition(ListNode* head, int x) {
        ListNode* leftdummy = new ListNode(0);
        ListNode* rightdummy = new ListNode(0);
        ListNode* left = leftdummy ;
        ListNode* right = rightdummy ;
        ListNode* temp = head; 
        while(temp != nullptr ) {
            if(temp->val < x) {
                left->next = temp ; 
               left = left -> next ; 
            }
            else{
                right ->next = temp; 
                right = right -> next; 
            }

            temp = temp->next ; 
        }
        left->next = rightdummy->next ;
        right->next = nullptr ;
        return leftdummy->next ;
    }
};