
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

         ListNode *slow=head;
         ListNode *fast=head;
         bool iscycle=false;
         while(fast && fast->next)
         {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                iscycle = true;
                break;
            }
         }

         if(iscycle)
         {
            slow=head;
            while(slow != fast){
                slow=slow->next;
                fast=fast->next;
            }
            return fast; //or slow

         }

        return NULL;
    }
};