/* Link list Node 
struct Node {
    int data;
    Node* next;
}; */
/* Should return data of middle node. If linked list is empty, then  -1*/

typedef struct Node* node;
int getMiddle(Node *head)
{
   if(head==NULL)
   return -1;
//   if(head->next==NULL)
//   return head->data;
   
   int count=1;
   node prev=head, cur=head;
   while(cur!=NULL) {
       if(count<2) {
           cur=cur->next;
           count++;
       }
       else {
           prev=prev->next;
           cur=cur->next;
           count=1;
       }
   }
//   prev=prev->next;
   return prev->data;
}
