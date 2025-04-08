/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* &root, vector<int> &leave){
        if(!root) return ; 
        if(root->left == nullptr && root->right == nullptr )
        {
            leave.push_back(root->val) ;
        }
        dfs(root->left , leave) ;
        dfs(root->right , leave) ; 
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>leave1 , leave2 ; 
        dfs(root1 , leave1) ;
        dfs(root2 , leave2) ;
        return leave1 == leave2 ; 
    }
};
