// Complete the has_cycle function below.

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
bool has_cycle(SinglyLinkedListNode* head) {
int count=0, flag=0;
node cur=head, prev=head;
while(cur!=NULL) {
    
    count++;
    if(count%3==0){
        prev=prev->next;
    }
    cur=cur->next;
    if(prev==cur){
        flag=1;
        break;
    }
}
if(flag==1)
    return true;
else
    return false;
}
