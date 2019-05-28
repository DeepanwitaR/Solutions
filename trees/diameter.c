/*This is a function problem.You only need to complete the function given below*/
/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */
/* Computes the diameter of binary tree with given root.  */
typedef struct Node* node;
int max(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}
int height(node root) {
    if(root==NULL) {
        return 0;
    }
    return 1+max(height(root->left),height(root->right));
}
int diameter(Node* node)
{
   if(node==NULL)
        return -1;
    else 
        return 1+(height(node->right))+height((node->left));
}
