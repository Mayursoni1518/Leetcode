/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void solve(TreeNode* cloned , TreeNode* target , TreeNode* &ans ){
        if(!cloned) return ;
        if(cloned->val == target->val){
            ans = cloned ;
            return ; 
        }
        solve(cloned->left , target , ans ) ;
        solve(cloned->right , target , ans ) ;
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* ans ;
        solve(cloned , target , ans) ;
        return ans ;
    }
};