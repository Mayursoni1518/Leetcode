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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans ;
        queue<TreeNode*>q ;
        if(!root) return ans ;

        q.push(root) ;

        while(!q.empty()) {
            int n = q.size() ;
            TreeNode* right = nullptr ;

            while(n--) {
                right = q.front() ;
                q.pop() ; 

                if(right->left){
                    q.push(right->left); 
                }
                if(right -> right) {
                    q.push(right->right) ; 
                }
            }
            ans.push_back(right->val) ;
        }
        return ans ; 
    }
};