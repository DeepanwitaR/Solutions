
/* Node of a linked list
 class Node {
   int data;
    Node next;
    Node(int d)  { data = d;  next = null; }
}
 Linked List class
class LinkedList
{
    Node head;  // head of list
}*/

class Intersect
{
    //Function to find intersection point in Y shaped Linked Lists.
	int intersectPoint(Node head1, Node head2)
	{
         if (head1 == null || head2 == null || head1.next == null || head2.next == null) {
             return -1;
         }
         if (head1==head2) {
             return head1.data;
         }
        
        int len1 = lengthOfLL(head1);
        int len2 = lengthOfLL(head2);
        int diff = 0;
        int tempCount = 0;
        if (len1 == len2) {
            Node prev1=head1, prev2=head2;
            while(prev1!=null && prev2 != null && prev1!=prev2){
                if (prev1 == prev2) {
                    return prev1.data;
                }
                prev1=prev1.next;
                prev2=prev2.next;
            }
        } else {
            Node prev1=head1, prev2=head2;
            if (len1>len2) {
                diff = len1 - len2;
                while (tempCount != diff) {
                    prev1=prev1.next;
                    tempCount++;
                }
            } else {
                diff = len2 - len1;
                while (tempCount != diff) {
                    prev2=prev2.next;
                    tempCount++;
                }
            }
            while(prev1!=null && prev2 != null && prev1!=prev2){
                prev1=prev1.next;
                prev2=prev2.next;
            }
            if (prev1!=null && prev2 != null && prev1 == prev2) {
                return prev1.data;
            }
        }
        return -1;
	}
	
	int lengthOfLL(Node head){
	    int count=0;
	    while (head!=null) {
	        count++;
	        head=head.next;
	    }
	    return count;
	}
}


