class Solution {
public:
    Node* copyRandomList(Node* head) {

        unordered_map<Node*,Node*> mpp;
        Node *curr=head;
        while(curr){
            mpp[curr] = new Node(curr->val);
            curr=curr->next;
        }
        curr=head;
        while(curr){
            if(curr->next)
                mpp[curr]->next = mpp[curr->next];
            if(curr->random)
                mpp[curr]->random= mpp[curr->random];
            curr=curr->next;
        }
        return mpp[head];
    }
};