class Solution {
public:
int leftheight(TreeNode* root){
    int h = 0;
    while(root){
        h++;
        root = root->left;
    }
    return h;
}

int rightheight(TreeNode* root){
    int h = 0;
    while(root){
        h++;
        root = root->right;
    }
    return h;
}



    int countNodes(TreeNode* root) {
       
        if(root == NULL) return 0;
        int left = leftheight(root);
       int right = rightheight(root);
       if(left == right){
        return pow(2,left)-1;
       }
       
        return countNodes(root->left) +countNodes(root->right)+1;
        
    }
};