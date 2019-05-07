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
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    node temp=(node)malloc(sizeof(struct SinglyLinkedListNode));
    temp->data=data;
    if(llist==NULL) {
        return temp;
    }
    temp->next=llist;
    return temp;

}
