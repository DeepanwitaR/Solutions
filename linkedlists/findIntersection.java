// find the intersection of a LL, that are the common elements from the 2 sorted LL. 
/* Node of a linked list
 class Node {
   int data;
    Node next;
    Node(int d)  { data = d;  next = null; }
}
*/

class Solution
{
   public static Node findIntersection(Node head1, Node head2)
    {
        Node head = null;
        Node tail = null;
        while (head1!=null && head2 != null) {
            if (head1.data == head2.data) {
                Node newNode = new Node(head1.data);
                if (head == null) {
                    head = newNode;
                    tail = head;
                } else {
                    tail.next=newNode;
                    tail=tail.next;
                }
                head1=head1.next;
                head2=head2.next;
            } else {
                if (head1.data < head2.data) {
                    head1=head1.next;
                } else {
                    head2=head2.next;
                }
            }
        }
        return head;
    }
}
