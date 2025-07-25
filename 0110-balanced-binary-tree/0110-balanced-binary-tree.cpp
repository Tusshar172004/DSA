class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return dfsHeight(root) != -1;
    }

    private:
    int dfsHeight(TreeNode* node){
        if(!node) return 0;

        int lh = dfsHeight(node->left);
        if(lh == -1) return -1;
        int rh = dfsHeight(node->right);
        if(rh == -1) return -1;

        if(abs(lh - rh) > 1) return -1;
        return 1 + max(lh, rh);
    }
};