class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Step 1: Calculate the size of the linked list
        ListNode* temp = head;
        int size = 0;
        while (temp != nullptr) {
            temp = temp->next;
            size++;
        }

        // Step 2: Handle edge case: removing the head node
        if (n == size) {
            return head->next; // Remove the head and return the new head
        }

        // Step 3: Traverse to the node just before the node to be removed
        temp = head; // Reset temp to the start of the list
        int stepsToTake = size - n - 1; // Stop one node before the target
        for (int i = 0; i < stepsToTake; i++) {
            temp = temp->next;
        }

        // Step 4: Remove the target node
        temp->next = temp->next->next;

        return head;
    }
};
