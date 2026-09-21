class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return root ;
        while(root){
            if(root == p || root == q) return root ;
            if(root->val > p->val && root->val > q->val) root = root->left ;
            else if(root->val < p->val && root->val < q->val) root = root->right ;
            else return root ;
        }
        return root ;
    }
};




/*class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root==NULL) return NULL;

        if(p->val < root->val && q->val < root->val )
            return lowestCommonAncestor(root->left,p,q);

        else if(p->val > root->val && q->val > root->val)
            return lowestCommonAncestor(root->right,p,q);
        
        else
            return root;
    
    }
};
*/