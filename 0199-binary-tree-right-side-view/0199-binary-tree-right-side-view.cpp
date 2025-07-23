class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        view(root,0,res);
        return res;
    }

    void view(TreeNode* root, int level, vector<int> &res){
        if(root == NULL) return;

        if(res.size() == level){
            res.push_back(root->val);        
    }
    view(root->right, level+1, res);
    view(root->left, level+1, res);
    }
};