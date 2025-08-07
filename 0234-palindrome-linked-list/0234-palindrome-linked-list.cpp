class Solution {
public:
    ListNode* reverse(ListNode* head) {
       ListNode* prev = nullptr ;
        ListNode* curr = head ;
        while(curr != nullptr ) {
            ListNode* nextptr = curr -> next ;
            curr->next = prev ;
            prev = curr ;
            curr= nextptr; 
        }
        return prev; 
    }
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return true;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr ) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* secondList = reverse(slow);
        ListNode* p1 = head;
        ListNode* p2 = secondList;

        while (p2 != nullptr) {
            if (p1->val != p2->val) {
                return false;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
        return true;
    }
};