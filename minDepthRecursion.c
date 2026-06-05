int min(int m,int n){
    return (m>n)?n:m;
}
int minDepth(struct TreeNode* root) {
    if(!root) return 0;
    int left=minDepth(root->left),right=minDepth(root->right);  // 处理只有一棵子树的特殊情况
    if(!root->left||!root->right) return left+right+1;
    else return min(left,right)+1;
}