// Basic Ops LL
public class Solution {
    public static void main(String[] args) {
        // create a linked list
        Node head = null;
        Node tail = null;
        for (int i=0; i<5 ;i++) {
            if (tail == null) {
                Node newNode = new Node(i);
                newNode.next = null;
                head = newNode;
                tail = newNode;
            } else {
                Node newNode = new Node(i);
                newNode.next = null;
                tail.next = newNode;
                tail = tail.next;
            }
        }
        // print the LL
        while (head != null) {
            System.out.println("LL element with value: " + head.val);
            head = head.next;
        }
    }
}

public class Node {
    int val;
    Node next;
    Node(int val) {
        this.val = val;
    }
}
