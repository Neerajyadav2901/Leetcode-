
class Solution {
public:
int height(TreeNode*root,int& dia){
     if(root == NULL){
            return 0;
        }
      int leftheight = height(root->left, dia);
      int rightheight = height(root->right, dia);

      dia = max(dia, leftheight +   rightheight);
      return 1 + max(leftheight, rightheight);

}
    int diameterOfBinaryTree(TreeNode* root) {
       int dia = 0;
       height(root,dia);
       return dia;  
    }
};