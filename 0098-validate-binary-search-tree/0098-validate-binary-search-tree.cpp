class Solution {
public:
    bool isValidBST(TreeNode* root) {
       return isBST(root, LONG_MIN, LONG_MAX); 
    }
    public :
    bool isBST(TreeNode* root, long minval, long maxval){
        if(root == NULL) return true;
        if(root->val >= maxval || root->val <= minval){
            return false;
        }
        return isBST(root->left, minval, root->val) && isBST(root->right, root->val, maxval);
    }
};