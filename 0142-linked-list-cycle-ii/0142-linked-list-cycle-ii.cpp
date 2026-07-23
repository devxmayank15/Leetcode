
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

         ListNode *slow=head;
         ListNode *fast=head;
         while(fast && fast->next)
         {
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast){
                
                ListNode* ptrs=head;
                while (slow != ptrs){
                    ptrs=ptrs->next;
                    slow=slow->next;
                }
                return ptrs;
         }
         }


                
            

         
        
        return NULL;
    }
};