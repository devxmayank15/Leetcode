class Solution {
public:
vector<int> ans;

    vector<int> inorderTraversal(TreeNode* root) {
        
        if(root==NULL)  return ans;

        inorderTraversal(root->left);
        ans.push_back(root->val);
        inorderTraversal(root->right);

        return ans;

    }
};





// class Solution {
// public:
//     vector<int> ans;
//     void inorder(TreeNode *root)
//     {
//         if (root == NULL)   return;
//         inorder(root->left);
//         ans.push_back(root->val);
//         inorder(root->right);
//     }
//     vector<int> inorderTraversal(TreeNode* root) {
//         inorder(root);
//         return ans;
//     }
// };