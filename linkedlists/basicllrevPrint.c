// Complete the reversePrint function below.

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
int stack[1000], top=-1;
void push (int n) {
    top++;
    stack[top]=n;
}

void reversePrint(SinglyLinkedListNode* head) {
node cur=head;
if(head==NULL) {
    exit(0);
}
while(cur!=NULL){
    push(cur->data);
    cur=cur->next;
}
while(top!=-1) {
    printf("%d \n",stack[top]);
    top--;
}
}
