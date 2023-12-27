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
        printLL(head);
        // insert an element in the front
        head = insertAtHead(-1, head);
        // print the LL
        printLL(head);
        // insert an element in the end
        head = insertAtTail(-1, head); 
        // print the LL
        printLL(head);
        // insert an element after a certain one in the list
        head = insertAfterGivenElementValue(-1, 2, head);
        // print the LL
        printLL(head);

    }

    public static void printLL(Node head) {
        // print the LL
        while (head != null) {
            System.out.println("LL element with value: " + head.val);
            head = head.next;
        }
        System.out.println("----------------");
    }

    public static Node insertAtHead(int value, Node head) {
        Node newNode = new Node(value);
        newNode.next = head;
        head = newNode;
        return head;
    }

    public static Node insertAtTail(int value, Node head) {
        Node newNode = new Node(value);
        newNode.next = null;
        Node tail = head;
        while (tail.next != null) {
            tail = tail.next;
        }
        tail.next = newNode;
        return head;
    }

    public static Node insertAfterGivenElementValue(int value, int llno, Node head) {
        Node newNode = new Node(value);
        Node tail = head, temp = null;
        while (tail != null & tail.val != llno) {
            tail = tail.next;
        }
        if (tail != null) {
            // means we have found the element and tail points to it.
            temp = tail.next;
            tail.next = newNode;
            newNode.next = temp;
        }
        return head;
    }
    public static Node deleteElementAtValue(int value, Node head) {
        
        if (head== null) {
            return head;
        }
        if (head.val == value) {
            return head.next;
        }
        Node prev = null,head1=head;
        while (head != null && head.val != value) {
            prev=head;
            head=head.next;
        }
        if (head != null && head.val == value){
            prev.next=head.next;
        }
        return head1;
    }
}

public class Node {
    int val;
    Node next;
    Node(int val) {
        this.val = val;
    }
}

// Sample Solution
// LL element with value: 0
// LL element with value: 1
// LL element with value: 2
// LL element with value: 3
// LL element with value: 4
// ----------------
// LL element with value: -1
// LL element with value: 0
// LL element with value: 1
// LL element with value: 2
// LL element with value: 3
// LL element with value: 4
// ----------------
// LL element with value: -1
// LL element with value: 0
// LL element with value: 1
// LL element with value: 2
// LL element with value: 3
// LL element with value: 4
// LL element with value: -1
// ----------------
// LL element with value: -1
// LL element with value: 0
// LL element with value: 1
// LL element with value: 2
// LL element with value: -1
// LL element with value: 3
// LL element with value: 4
// LL element with value: -1
// ----------------
