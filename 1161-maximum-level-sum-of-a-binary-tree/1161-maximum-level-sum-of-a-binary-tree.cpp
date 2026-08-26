class Solution {
public:

    int maxLevelSum(TreeNode* root) {

        if(root == NULL)
            return 0;

        queue<TreeNode*> q;
        q.push(root);

        int maxsum = INT_MIN;
        int level = 0;
        int i = 0;

        while(!q.empty())
        {
            int size = q.size();
            i++;

            int sum = 0;

            while(size--)
            {
                TreeNode* curr = q.front();
                q.pop();

                sum += curr->val;

                if(curr->left)
                    q.push(curr->left);

                if(curr->right)
                    q.push(curr->right);
            }

            if(sum > maxsum)
            {
                maxsum = sum;
                level = i;
            }
        }

        return level;
    }
};


