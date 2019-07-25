/*This is a function problem.You only need to complete the function given below*/
/* A binary tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */
//You are required to complete this method
typedef struct Node* node;
void levelOrder(Node* root)
{
  node q[1000];
  int f=0,r=-1;
  q[++r]=root;
  node cur=NULL;
  while(f<=r){
      cur=q[f++];
      printf("%d ",cur->data);
      
      if((cur->left)!=NULL) {
          q[++r]=cur->left;
      }
      if((cur->right)!=NULL) {
          q[++r]=cur->right;
      }
  }
  return;
}
