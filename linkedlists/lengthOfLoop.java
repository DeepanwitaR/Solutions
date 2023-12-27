//Function should return the length of the loop in LL.

class Solution
{
    //Function to find the length of a loop in the linked list.
    static int countNodesinLoop(Node head)
    {
        // first we check the presence.
        if(head == null || head.next == null) {
            return 0;
        }
        Node prev=head;
        int count=0;
        head=head.next;
        while (head != null) {
            if (head == prev) {
                return checkLengthOfLoop(head);
            }
            if (count == 3) {
                prev = prev.next;
                count=0;
            } else {
                count++;
            }
            head = head.next;
        }
        return 0;
        
    }
    
    public static int checkLengthOfLoop(Node head) {
        Node prev=head;
        head = head.next;
        int count = 1;
        while (head != prev) {
            head=head.next;
            count++;
        }
        return count;
    }
}
