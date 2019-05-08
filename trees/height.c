int max (int a, int b){
    if(a>b)
        return a;
    else
        return b;
}
int getHeight(struct node* root) {
    if(root==NULL) {
        return -1;
    }
    return 1+max(getHeight(root->left),getHeight(root->right));
}
