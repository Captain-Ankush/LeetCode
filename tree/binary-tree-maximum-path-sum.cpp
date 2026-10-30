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
int maxSum(TreeNode* root,int& best){
    if(root == nullptr ) return 0;
    int l = max(0,maxSum(root->left, best));
    int r = max(0,maxSum(root->right, best));
    best = max(best, root->val + l+r);
    return root->val + max(l,r);
}
  
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int best = root->val;
        maxSum(root, best);
        return best;
    }
};