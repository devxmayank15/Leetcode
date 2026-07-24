
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if (head == NULL || head->next == NULL || k == 0)
            return head;

        int count = 0;
        ListNode* var = head;

        while (var) {
            count++;
            var = var->next;
        }

        k = k% count;
        if (k == 0)
            return head;

        ListNode* temp = head;
        int steps = count - k - 1;

        while (steps--) {
            temp = temp->next;
        }
        ListNode *var1=temp;
        while(var1->next) 
            var1=var1->next;
        var1->next=head;
        head=temp->next;
        temp->next=NULL;





        return head;
        
        
    }
};