class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next) {
            return head;
        }
        
        // Calculate the size of the list
        ListNode* temp = head; 
        int size = 1;
        while (temp->next != nullptr) {
            temp = temp->next;
            size++;
        }

        // Make the list circular
        temp->next = head; 
        
        // Compute effective rotations
        k = k % size;
        if (k == 0) {
            temp->next = nullptr; // Break the circular connection
            return head;
        }

        // Find the new tail
        int steptoTake = size - k; 
        ListNode* newTail = head;
        for (int i = 1; i < steptoTake; i++) { // Fix: Loop stops earlier
            newTail = newTail->next;
        }

        // Set the new head and break the circular connection
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;
    }
};
