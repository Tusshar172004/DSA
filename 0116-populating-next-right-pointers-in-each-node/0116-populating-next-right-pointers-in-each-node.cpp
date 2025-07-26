class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL || root->left == NULL) return root;

        queue<Node*> q;
        q.push(root);
        q.push(NULL);

        Node* prev = NULL;
        while(q.size() > 0) {
            Node* cur = q.front();
            q.pop();
    
        if(cur == NULL){
          if(q.size() == 0){
            break;
          }
          q.push(NULL);
        } else {
            if(cur->left != NULL) {
                q.push(cur->left);
            }
            if(cur->right != NULL){
                q.push(cur->right);
            }
            if(prev != NULL){
                prev->next = cur;
            }
           
        }
         prev = cur;
        }
        return root;

    }
};