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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){
            return NULL;
        }
        if(root==p||root==q){
            return root;
        }
        TreeNode* leftval=lowestCommonAncestor(root->left,p,q);
        TreeNode* rightval=lowestCommonAncestor(root->right,p,q);
        if(leftval!=NULL&&rightval!=NULL){
            return root;
        }
        if(leftval!=NULL){
            return leftval;
        }
        return rightval;
    }
};