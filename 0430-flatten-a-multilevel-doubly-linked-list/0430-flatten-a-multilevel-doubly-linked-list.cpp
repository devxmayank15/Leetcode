/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if (head == NULL) return NULL;
        
        stack<Node*> st;
        // st.push(head);
        Node *curr=head;

        while(!curr==NULL)
        {

            if(curr->child){

                if(curr->next)
                    st.push(curr->next);



                curr->next=curr->child;

                curr->child->prev = curr;
                
                curr->child=NULL;

            }
            
            if (curr->next == NULL && !st.empty() ) 
            {
                Node* nextNode = st.top();
                st.pop();

                curr->next = nextNode;
                nextNode->prev = curr;
            }
            cout<<curr->val<<endl;
            curr=curr->next;
            
        }
        return head;
    
    }
};




