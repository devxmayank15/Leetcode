class Solution {
public:
    bool helper(TreeNode* root, long long minval , long long maxval)
    {
         if (root == NULL)
            return true;
        if(root->val <= minval || root->val >= maxval)  return false;

        bool leftvalid= helper(root-> left, minval, root->val);
        bool rightvalid=helper(root->right, root->val, maxval);

        return leftvalid && rightvalid;
    }
    bool isValidBST(TreeNode* root) 
    {
        return helper(root, LLONG_MIN, LLONG_MAX);
    }
};