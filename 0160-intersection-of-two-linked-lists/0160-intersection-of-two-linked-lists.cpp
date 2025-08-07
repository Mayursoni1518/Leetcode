class Solution {
public:
    int sizee(ListNode* head) {
        int cnt = 0 ;
        ListNode* temp = head ;
        while(temp != nullptr ) {
            cnt++ ;
            temp = temp -> next ; 
        }
        return cnt ; 
    } 
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int size1 = sizee(headA) ;
        int size2 = sizee(headB) ; 
        if(size1 < size2 ) {
            int diff = size2 - size1 ;
            for(int i = 1 ; i <= diff ; i++ ) {
                headB = headB->next ;
            }
        }
        else{
            int diff = size1 - size2 ; 
            for(int i = 1 ; i <= diff ; i++ ) {
                headA = headA->next ;
            }
        }
        while(headA != nullptr && headB != nullptr ) {
            if(headA == headB) {
                return headA; 
            }
            headA = headA->next ;
            headB = headB->next; 
        }
        return nullptr ;  
    }
};