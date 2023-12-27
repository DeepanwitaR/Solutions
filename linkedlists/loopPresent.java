/* Node is defined as

class Node
{
    int data;
    Node next;
    Node(int d) {data = d; next = null; }
}

*/


class Solution {
    //Function to check if the linked list has a loop.
    public static boolean detectLoop(Node head){
        if (head == null || head.next == null) {
            return false;
        }
        Node prev=head;
        head = head.next;
        int count=0;
        while(head != null) {
            if (head == prev) {
                return true;
            }
            if (count==2) {
                prev = prev.next;
                count=0;
            } else {
                count++;
            }
            head = head.next;
        }
        return false;
    }
}
