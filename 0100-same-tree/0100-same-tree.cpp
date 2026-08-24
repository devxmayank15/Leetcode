class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if(p==NULL && q==NULL)
            return true;   
        if(p==NULL || q==NULL)
            return false;

        bool leftsame= isSameTree(p->left, q->left);
        bool rightsame = isSameTree(p->right, q->right);

        return leftsame && rightsame && (p->val==q->val);
    }
};








// class Solution {
// public:
//     bool isSameTree(TreeNode* p, TreeNode* q) {

//         // Both are empty
//         if(p == NULL && q == NULL)
//             return true;

//         // One is empty, one isn't
//         if(p == NULL || q == NULL)
//             return false;

//         // Values are different
//         if(p->val != q->val)
//             return false;

//         // Check left and right subtrees
//         return isSameTree(p->left, q->left) &&
//                isSameTree(p->right, q->right);
//     }
// };