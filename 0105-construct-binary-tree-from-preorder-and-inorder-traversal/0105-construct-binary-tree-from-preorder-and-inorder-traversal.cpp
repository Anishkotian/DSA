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
    TreeNode* build(vector<int>&preorder,vector<int>&inorder,int& pre,int l,int r){
        if(l>r)return NULL;
        TreeNode* root=new TreeNode(preorder[pre++]);
        int pos=l;
        while(inorder[pos]!=root->val)pos++;
        root->left=build(preorder,inorder,pre,l,pos-1);
        root->right=build(preorder,inorder,pre,pos+1,r);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder,vector<int>& inorder) {
        int pre=0;
        return build(preorder,inorder,pre,0,inorder.size()-1);
    }
};