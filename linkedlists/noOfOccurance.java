/*node class of the linked list
class Node
{
    int data;
    Node next;
    Node(int key)
    {
        data = key;
        next = null;
    }
}*/
// complete the below function to find the no of times a number occurs in the LL
class Solution
{
    public static int count(Node head, int search_for)
    {
        int count=0;
        while(head != null) {
            if(head.data == search_for) {
                count++;
            }
            head=head.next;
        }        
        return count;
    }
}
