// Is the LL circular.
class GfG
{
    boolean isCircular(Node head)
    {
        if (head.next==null) {
            return false;
        }
        Node home=head;
        head=head.next;
        while (head!=null) {
            if (head==home) {
                return true;
            }
            head=head.next;
        }
        return false;
    }
}
