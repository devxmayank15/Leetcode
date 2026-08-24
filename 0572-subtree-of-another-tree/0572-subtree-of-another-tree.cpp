class Solution {
public:

    bool isidentical(TreeNode* p, TreeNode* q)
    {
        if(p==NULL || q==NULL)
            return (p==q);

        bool left= isidentical(p->left, q->left);
        bool right= isidentical(p->right, q->right);

        return (left&&right && p->val==q->val);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        if(root==NULL || subRoot==NULL)
            return (root==subRoot);

        if(root->val==subRoot->val && isidentical(root, subRoot))
            return true;
        
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);

    }
};