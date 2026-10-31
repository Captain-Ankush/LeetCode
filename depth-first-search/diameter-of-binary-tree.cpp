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

int diameter(TreeNode* root,int& best){
    if(root == NULL) return 0;
    int l = diameter(root->left,best);
    int r = diameter(root->right,best);
    best = max(best,l+r);
    return 1 + max(l,r);
}
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int best = 0;
        diameter(root,best);
        return best;
    }
};