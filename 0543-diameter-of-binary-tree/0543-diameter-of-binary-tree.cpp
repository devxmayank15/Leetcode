class Solution {
public:

    int height(TreeNode* root)
    {
        if(root==NULL)  return 0;

        int left=height(root->left);
        int right=height(root->right);

        return max(left,right)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root==NULL)  return 0;

        int leftdiam = diameterOfBinaryTree(root->left);
        int rightdiam = diameterOfBinaryTree(root->right);

        int currdiam= height(root->left) + height(root->right);

        return max(leftdiam, max(rightdiam, currdiam));


    }
};