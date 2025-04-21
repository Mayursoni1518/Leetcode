class Solution {
public: 
    vector<int> solve(TreeNode* root , int level , vector<int> &result){
        if(root == nullptr ){
            return result ; 
        }
        if(result.size() == level ){
            result.push_back(root->val) ;
        }
        solve(root->right , level + 1 , result);
        solve(root->left , level + 1 , result ); 
        return result ; 
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>result ;
        solve(root , 0 , result) ;
        return result ; 
    }
};