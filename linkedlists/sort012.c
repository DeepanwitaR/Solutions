Sort the list of 0's,1's and 2's
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     Node *next;
  }
*/
void swap(Node *x,Node *y)
{
    int temp;
    temp=x->data;
    x->data=y->data;
    y->data=temp;
}

void sortList(Node *head)
{
   int c=0; Node *i=head,*j=head;
   while(c<2)
   {
       while(j!=NULL)
       {
           if(j->data==c)
           {
               swap(i,j);
               i=i->next;
               
           }
           j=j->next;
       }
       j=i; c++;
   }
  // return head;
}
