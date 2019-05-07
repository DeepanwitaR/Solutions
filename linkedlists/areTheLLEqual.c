// Complete the compare_lists function below.

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
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    node cur1=head1, cur2=head2;
    if(head1==NULL || head2==NULL) {
        return false;
    }
    while (cur1!=NULL && cur2!=NULL) {
        if (cur1->data != cur2->data) {
            break;
        }
        cur1=cur1->next;
        cur2 = cur2->next;
    }
    if (cur1 == NULL && cur2 == NULL) {
        return true;
    } else {
        return false;
    }
}
