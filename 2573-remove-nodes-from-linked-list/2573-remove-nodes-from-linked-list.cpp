class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        while (head != nullptr) {
            ListNode* nextCurr = head->next;
            head->next = prev;
            prev = head;
            head = nextCurr;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        ListNode* rev = reverse(head);

        ListNode* curr = rev;
        int maxi = curr->val;
        ListNode* temp = curr;

        while (temp != nullptr && temp->next != nullptr) {
            if (temp->next->val < maxi) {
                temp->next = temp->next->next;
            } else {
                temp = temp->next;
                maxi = temp->val;
            }
        }
        return reverse(rev);
    }
};
// 8 -> 3 -> 13 -> 2 -> 5