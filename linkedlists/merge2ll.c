// Complete the mergeLists function below.

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
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    node ans=NULL,anstail=NULL;
    node prev1=NULL, prev2=NULL, cur1=head1, cur2=head2;
    while(cur1!=NULL && cur2!=NULL) {
        if(cur1->data < cur2->data) {
            prev1=cur1;
            cur1=cur1->next;

            if(ans==NULL) {
                ans=prev1;
                ans->next=NULL;
                anstail=ans;
            }
            anstail->next=prev1;
            anstail=anstail->next;
            anstail->next=NULL;
        } else if (cur1->data > cur2->data) {
          prev2 = cur2;
          cur2 = cur2->next;

          if (ans == NULL) {
            ans = prev2;
            ans->next = NULL;
            anstail = ans;
          }
          anstail->next = prev2;
          anstail = anstail->next;
          anstail->next = NULL;
        }
        else {
          prev2 = cur2;
          cur2 = cur2->next;
          prev1 = cur1;
          cur1 = cur1->next;

          if (ans == NULL) {
            ans = prev2;
            ans->next = NULL;
            anstail = ans;
          }
          anstail->next = prev2;
          anstail = anstail->next;
          anstail->next = NULL;
          anstail->next = prev1;
          anstail = anstail->next;
          anstail->next = NULL;
        }
    }
    if(cur1==NULL) {
        anstail->next=cur2;
    } else if (cur2 == NULL) {
      anstail->next = cur1;
    }
    return ans;
}
