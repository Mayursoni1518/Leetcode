class Solution {
public:
    int value(ListNode* head ) {
        int cnt = 0 ;
        while(head != nullptr ) {
            cnt++ ;
            head = head -> next ; 
        }
        return cnt ; 
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(-1) ;
        dummy->next = head ; 
        ListNode* temp = dummy ; 
        int pos = value(head) - n ; 

        for(int i = 0 ; i< pos ; i++ ) {
            temp = temp -> next ; 
        }
        temp -> next = temp->next->next ;
        return dummy->next; 
    }
};