class Solution {
public:
    TreeNode* inordersucc(TreeNode* root)
    {
        while(root && root->left)
            root=root->left;       
        return root;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        
        if(root==NULL)  return NULL;

        if(root->val < key)
            root->right= deleteNode(root->right,key);
        else if(root->val > key)
            root->left= deleteNode(root->left,key);
        
        else{

            if(root-> right == NULL)
            {
                TreeNode* temp= root->left;
                delete root;
                return temp;       
            }
            else if(root-> left == NULL)
            {
                TreeNode* temp= root->right;
                delete root;
                return temp;       
            }
            else
            {
                TreeNode* is= inordersucc(root->right);
                root->val= is->val;
                root->right= deleteNode(root->right, is->val);
            }
        }
        return root;
    }
};