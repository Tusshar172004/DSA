class Solution {
public:

    void inorder(TreeNode* root, vector<int> &val){
        if(!root) return;
        inorder(root->left, val);
        val.push_back(root->val);
        inorder(root->right, val);

    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> val;
        inorder(root, val);
        return val[k-1];
    }
};