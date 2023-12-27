/* Structure of node

class Node
{
    int data;
    Node next;
    Node(int d) {data = d; next = null; }
}
*/

class Solution
{
    //Function to find the data of nth node from the end of a linked list.
    int getNthFromLast(Node head, int n)
    {
    	if (head == null || (head.next==null && n!=1)) {
    	    return -1;
    	}
    	int count=1;
    	Node prev=head;
    	while (head.next!=null) {
    	    head=head.next;
    	    if(count == n) {
    	        prev=prev.next;
    	    } else{
    	        count++;
    	    }
    	}
    	if (count != n) {
    	    return -1;
    	}
    	
    	return prev.data;
    }
}
