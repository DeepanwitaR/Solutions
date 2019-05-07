// Complete the removeDuplicates function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
typedef struct SinglyLinkedListNode* node;
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    node cur=head,prev=NULL,next=NULL;
    int number;
    while(cur!=NULL){
        if(cur==head){
            number=cur->data;
            prev=cur;
            next=cur;
        }
        else if(cur->data==number){
            next=cur;
        }
        else if (cur->data!=number) {
          number = cur->data;
          prev->next=cur;
          prev=cur;
        }
        cur=cur->next;
    }
    if(cur==NULL){
        prev->next=NULL;
    }
return head;
}
