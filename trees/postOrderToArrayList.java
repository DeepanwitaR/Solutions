/*
class Node{
    int data;
    Node left;
    Node right;
    Node(int data){
        this.data = data;
        left=null;
        right=null;
    }
}
*/
// travel post order and then insert in order to an array list
class Tree {
    ArrayList<Integer> array = new ArrayList<Integer>();
    
    ArrayList<Integer> postOrder(Node node) {
        postOrderTrav(node);
        return array;
    }
    
    void postOrderTrav(Node node) {
        if (node == null) {
            return;
        }
        postOrderTrav(node.left);
        postOrderTrav(node.right);
        array.add(node.data);
    }
}
