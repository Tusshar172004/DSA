class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        findmaxi(root, maxi);
        return maxi;
    }

    private:
    int findmaxi(TreeNode* root, int &maxi){
        if(root == NULL) return 0;

        int left = max(0, findmaxi(root->left, maxi));
        int right = max(0, findmaxi(root->right, maxi));
        maxi = max(maxi, left + right + root->val);
        return max(left, right) + root->val;
    }
};