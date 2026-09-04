class Solution {
public:

    int search(vector<int> inorder, int value, int left, int right)
    {
        for(int i=left; i<=right;i++)
        {
            if(inorder[i]==value)
                return i;
        }
        return -1;
    }

    
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int& preindex, int left, int right)
    {
        if(left > right)    return NULL;

        TreeNode* root = new TreeNode(preorder[preindex++]);

        int inoindex= search(inorder, root->val, left,right);

        root->left=helper(preorder, inorder, preindex,left,inoindex-1);
        root->right=helper(preorder, inorder, preindex,inoindex+1,right);

        return root;

    }





    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preindex=0;
        return helper(preorder,inorder, preindex, 0, inorder.size()-1);
    }
};