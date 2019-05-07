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
void printLinkedList(SinglyLinkedListNode* head) {
    node pt= head;
    while(pt!=NULL){
        printf("%d\n",pt->data);
        pt=pt->next;
    }

}
