class Solution {
public:

map<TreeNode*,int> mp;
map<TreeNode*,TreeNode*> parent;

int level(TreeNode* root)
{
    if(root == NULL)
        return -1;

    queue<tuple<TreeNode*, int, TreeNode*>> q;
    q.push({root, 0, NULL});

    while(!q.empty())
    {
        auto x = q.front();
        q.pop();

        TreeNode* node = get<0>(x);
        int lev = get<1>(x);
        TreeNode* par=get<2>(x);

        // if(node == p)
        //     return lev;
        mp[node] = lev;
        parent[node]=par;
        

        if(node->left !=NULL)
            q.push({node->left, lev + 1, node});

        if(node->right != NULL)
            q.push({node->right, lev + 1, node});
    }
    return -1;
}










    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        level(root);
        while(p != q)
        {
            int pl=mp[p];
            int ql=mp[q];

            if(pl<ql)
                q = parent[q];
            else if(pl>ql)
                p=parent[p];
            
            else
            {
                q=parent[q];
                p=parent[p];

            }

            

        }

return p;
    }
};