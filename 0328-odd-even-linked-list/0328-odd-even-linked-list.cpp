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
    ListNode* oddEvenList(ListNode* head) {
       // Only difference in mine and yours is the while condition

   if(!head || !head->next || !head->next->next) return head;
    ListNode *odd = head, *even = head->next;
    ListNode  *t = even;

    while(odd->next && odd->next->next){
        odd->next = even->next;
        even->next = even->next->next;
        odd = odd->next;
        even = even->next;
    }
    odd->next = t;
    return head;
    }
};