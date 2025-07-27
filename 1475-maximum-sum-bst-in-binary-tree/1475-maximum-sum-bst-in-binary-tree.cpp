class NodeValue{
    public:
    int maxNode, minNode, maxSum;
    NodeValue(int minNode, int maxNode, int maxSum){
        this->maxNode = maxNode;
        this->minNode = minNode;
        this->maxSum = maxSum;
    }
};

class Solution {
    private:

    int ans = 0;
    NodeValue largestfind(TreeNode* root){
        if(!root) return NodeValue(INT_MAX, INT_MIN, 0);

        auto left = largestfind(root->left);
        auto right = largestfind(root->right);

        if(left.maxNode < root->val && root->val < right.minNode){
            int currSum = left.maxSum + right.maxSum + root->val;
            ans = max(ans, currSum);
            return NodeValue(
                min(root->val, left.minNode),
                max(root->val, right.maxNode),
                currSum
            );
        }
        else {
            return NodeValue(INT_MIN, INT_MAX, max(left.maxSum, right.maxSum));
        }
    }

public:
    int maxSumBST(TreeNode* root) {
        largestfind(root);
        return ans;
    }
};