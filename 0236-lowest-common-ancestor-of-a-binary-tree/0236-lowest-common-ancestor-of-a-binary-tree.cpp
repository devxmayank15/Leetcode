class Solution {
public:

map<TreeNode*,int> mp;
map<TreeNode*,TreeNode*> parent;

void rlevel(TreeNode* root, int level, TreeNode* par)
{
    if(root==NULL)  return ;
    mp[root]=level;
    parent[root]= par;

    rlevel(root->left, level+1, root);
    rlevel(root->right, level+1, root);


}
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

        mp[node] = lev;
        parent[node]=par;
        if(node->left !=NULL)
            q.push({node->left, lev + 1, node});

        if(node->right != NULL)
            q.push({node->right, lev + 1, node});
    }
    return -1;
}


TreeNode* rlca( TreeNode* p, TreeNode* q)
{
    if(p==q)    return p;

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

            return rlca(p,q);

}








    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        rlevel(root, 0, NULL);
        
    //     while(p != q)
    //     {
    //         int pl=mp[p];
    //         int ql=mp[q];

    //         if(pl<ql)
    //             q = parent[q];
    //         else if(pl>ql)
    //             p=parent[p];
            
    //         else
    //         {
    //             q=parent[q];
    //             p=parent[p];
    //         }
            
    //     }
    // return p;


    return rlca(p,q);
    }
};