//preOrder

void preOrder( struct node *root) {
    if(root==NULL)
        return;
    printf("%d ",root->data );
    preOrder(root->left);
    preOrder(root->right);
}

//postOrder
void postOrder( struct node *root) {
    if(root==NULL)
    return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ",root->data);
}

//inOrder

void inOrder( struct node *root) {
    if(root==NULL)
    return;
    inOrder(root->left);
    printf("%d ",root->data);
    inOrder(root->right);
}
