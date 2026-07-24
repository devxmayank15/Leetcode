
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        vector<ListNode*> nodes;
        ListNode *curr=head;
        while(curr)
        {
            nodes.push_back(curr);
            curr=curr->next;
        }
        int n=nodes.size();
        for (int i=0;i+k<=n;i+=k){
            reverse(nodes.begin()+i , nodes.begin()+i+k);
        }
        for(int i=0;i<n-1;i++)
        {
            nodes[i]->next=nodes[i+1];
        }
        nodes[n-1]->next=NULL;

        return nodes[0];
    }
    
};