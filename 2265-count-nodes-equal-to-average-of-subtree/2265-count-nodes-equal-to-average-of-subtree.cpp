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
    int count=0;
    int ans(TreeNode* root,int &n){
        if(root==NULL){
            n=0;
            return 0;
        }
        int lef,rig;
        int l=ans(root->left,lef);
        int r=ans(root->right,rig);
        n=lef+rig+1;
        int sum=l+r+root->val;
        if(root->val==sum/n){
            count++;
        }
        return sum;
    }
    int averageOfSubtree(TreeNode* root) {
        int n;
        ans(root,n);
        return count;
    }
};