/*
class Node
    {
        int data;
        Node next;
        Node(int d) {data = d; next = null; }
    }
*/

class GfG
{
    //Function to remove duplicates from sorted linked list.
    Node removeDuplicates(Node head)
    {
        if (head == null || head.next == null) {
            return head;
        }
        Node head1 = head;
        Node prev=head;
        head=head.next;
        while (head!=null) {
            if (head.data == prev.data) {
                while (head!=null && head.data == prev.data) {
                    head = head.next;
                }
                prev.next=head;
            }
            prev=head;
        }
        return head1;
    }
}
