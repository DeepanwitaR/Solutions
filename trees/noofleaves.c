/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
/* Should return count of leaves. For example, return
    value should be 2 for following tree.
         10
      /      \ 
   20       30 */
typedef struct Node* node;
int ans;
void preorder(node root){
    if(root==NULL)
        return;
    if((root->right)==NULL && (root->left)==NULL) {
        ans++;
    }
   
    preorder(root->left);
    preorder(root->right);
}
int countLeaves(Node* root)
{
  ans=0;
  preorder(root);
  return ans;
}
