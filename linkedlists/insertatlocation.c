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
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    node cur=head,prev=NULL;
    int count=0;
    node temp=(node)malloc(sizeof(struct SinglyLinkedListNode));
    temp->data=data;
    if(head==NULL)
    {
        temp->next=NULL;
        return temp;
    }
    else {
        while(cur!=NULL && count<=position-1) {
            count++;
            prev=cur;
            cur=cur->next;
        }
        if(cur==NULL){
            prev->next=temp;
            temp->next=NULL;
            return head;
        }
        prev->next=temp;
        temp->next=cur;
        return head;
    }

}
