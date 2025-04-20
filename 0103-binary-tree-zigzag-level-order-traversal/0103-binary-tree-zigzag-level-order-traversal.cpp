/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root == nullptr ){
            return result ; 
        }
        queue<TreeNode*> q;
        q.push(root);
        int level = 0 ; 
        while (!q.empty()) {
            int size = q.size();
            vector<int> ans;

            while (size--) {
                TreeNode* node = q.front();
                q.pop();

                if (node != nullptr) {
                    ans.push_back(node->val);

                    if (node->left != nullptr) {
                        q.push(node->left);
                    }
                    if (node->right != nullptr) {
                        q.push(node->right);
                    }
                }
            }
            if (level % 2 != 0) {
                reverse(ans.begin(), ans.end());
            }
            level++;
            result.push_back(ans) ;
        }
        return result ; 
    }
};