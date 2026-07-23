class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int count = 0;
        ListNode* temp = head;
        while (temp) {
            count++;
            temp = temp->next;
        }
        if (count == n)
            return head->next;

        ListNode* first = head;
        int steps = count - n;
        while (steps > 1) {
            first = first->next;
            steps--;
        }
        first->next = first->next->next;

        return head;
    }
};