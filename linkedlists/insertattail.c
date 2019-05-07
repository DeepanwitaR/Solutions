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

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    node temp=(node)malloc(sizeof(struct SinglyLinkedListNode));
    temp->next=NULL;
    temp->data=data;
    if(head==NULL) {
        return temp;
    }
    node cur=head, prev=NULL;
    while(cur!=NULL){
        prev=cur;
        cur=cur->next;
    }
    prev->next=temp;
    return head;
}
