
class Solution {
public:
      int search(vector<int>& inorder, int left, int right, int val){
     for(int i = left; i <= right; i++){
           if(val == inorder[i]){
            return i;
        }
     }
     return -1;
      }

   TreeNode* helper(vector<int>& inorder, vector<int>& postorder,int& postidx,int left, int right){
    if(left > right){
        return NULL;
    }
     TreeNode* root = new TreeNode(postorder[postidx]);
     int idx = search(inorder, left, right, postorder[postidx]);
     if(idx == -1) return NULL;
     postidx--;
     
     root->right = helper(inorder, postorder, postidx, idx+1, right);
     root->left = helper(inorder, postorder, postidx, left,idx-1);
     //root->right = helper(inorder, postorder, postidx, idx+1, right);
     
     return root;

   }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postidx = postorder.size()-1;
        return helper(inorder,postorder,postidx,0 ,inorder.size()-1);
        
    }
};