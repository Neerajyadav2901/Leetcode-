class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*> parent;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();

            if(node->left){
                parent[node->left] = node;
                q.push(node->left);
            }

             if(node->right){
                parent[node->right] = node;
                q.push(node->right);  
            }
        }
        unordered_set<TreeNode*> visited;
        queue<TreeNode*> bfs;
        bfs.push(target);
        visited.insert(target);
        int dist =0;
        while(!bfs.empty()){
            int size = bfs.size();
            if(dist == k){
                break;
            }
            for(int i = 0; i < size; i++){
                TreeNode* node = bfs.front();
                bfs.pop();

                if(node->left && !visited.count(node->left)){
                    bfs.push(node->left);
                    visited.insert(node->left);
                }

                 if(node->right && !visited.count(node->right)){
                    bfs.push(node->right);
                    visited.insert(node->right);
                }
                if(parent.count(node) && !visited.count( parent[node] )){
                    bfs.push(parent[node]);
                    visited.insert(parent[node]);
                }
            }
            dist++;
        }
        vector<int>ans;
        while(!bfs.empty()){
            ans.push_back(bfs.front()->val);
            bfs.pop();
        }
        return ans;


        
    }
};