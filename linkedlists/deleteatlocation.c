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
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    node cur=head, prev=NULL;
    int count=0,flag=0;
    while(cur!=NULL) {
        count++;        
        if(count==position+1) {
            prev->next=cur->next;
            flag=1;
            break;
        }
        prev=cur;
        cur=cur->next;
    }
    
    return head;

}
