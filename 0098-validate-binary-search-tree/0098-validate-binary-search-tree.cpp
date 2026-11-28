class Solution {
public:
    bool isValidBST(TreeNode* root) {
       return isValidBST(root,  LONG_MIN,  LONG_MAX);   
        
    }

    bool isValidBST(TreeNode* root,long min_value, long max_value){
        if(root == NULL){
            return true;
        }
        if(root->val >= max_value || root->val <= min_value){
            return false;
        }
        return isValidBST(root->left,min_value, root->val)&& isValidBST(root->right, root->val,max_value);
    }
};