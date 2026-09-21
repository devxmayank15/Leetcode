class Solution {
public:
    TreeNode* ans;
    TreeNode* searchBST(TreeNode* root, int val) {
        
        if (root == NULL)   return NULL;

        if(root-> val > val)
            TreeNode* leftst = searchBST(root->left, val);
        else if(root->val < val)
            TreeNode* rightst = searchBST(root->right, val);
        
        else
            ans=root;
        
        return ans;
        
    }
};