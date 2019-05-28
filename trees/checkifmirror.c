/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
Structure of the node of the tree is as
struct Node
{
	int key;
	struct Node* left, *right;
};
*/
// complete this function
// return true/false if the is Symmetric or not
typedef struct Node* node;
int leftin=0,rightin=0,arr1[1000],arr2[1000];

void preorder(node root) {
    if(root==NULL) {
        return;
    }
    
    if((root->left==NULL)&&(root->right)!=NULL){
        arr1[leftin]=-1;leftin++;
    }else{
        arr1[leftin]=root->key;leftin++;
    }
    preorder(root->left);
    preorder(root->right);
    
}
void postorder(node root) {
    if(root==NULL){
        return ;
    }
    
    if((root->right==NULL)&&(root->left)!=NULL){
        arr2[rightin]=-1;rightin++;
    }
    else {
        arr2[rightin]=root->key;rightin++;
    }
    postorder(root->left);
    postorder(root->right);
    
}
int checkequal() {
    int i;
    if(rightin!=leftin){
        return 0;
    }
    for(i=0;i<leftin;i++){
        if(arr2[i]!=arr1[i] || arr2[i]==-1 || arr1[i]==-1)
            return 0;
    }
    return 1;
}
bool isSymmetric(struct Node* root)
{   
    leftin=0;rightin=0;
	if((root->left)!=(root->right))
	    return false;
	
     preorder(root->left); //returns the size of the array.
	 postorder(root->right);
	
	if(checkequal()){
	    return true;
	}
	else 
	    return false;
	
}
