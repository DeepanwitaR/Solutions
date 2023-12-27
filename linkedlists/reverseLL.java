// Reverse Linked List
class Solution
{
    //Function to reverse a linked list.
    Node reverseList(Node head)
    {
        if (head.next == null || head == null) {
            return head;
        }
        
        Node tail=head,temp=null,prev=null;

        while(tail!=null){
            temp = tail.next;
            tail.next=prev;
            prev=tail;
            tail=temp;
        }
        return prev;
    }
}
