class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int leftmost_value;
        
        while (!q.empty()) {
            int level_size = q.size();
            leftmost_value = q.front()->val; // The first element in the queue is the leftmost for this level
            
            for (int i = 0; i < level_size; ++i) {
                TreeNode* node = q.front();
                q.pop();
                
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
        }
        
        return leftmost_value;
    }
};