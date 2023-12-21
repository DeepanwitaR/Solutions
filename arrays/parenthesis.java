// Check whether the parenthesis of brackets are valid.
class Solution {
    public boolean isValid(String s) {
        ArrayList <Character> stack = new ArrayList<Character>();
        int top = -1;
        int len = s.length();
        if (len < 2) {
            return false;
        }
        stack.add(s.charAt(0));
        top++;
        int i;

        for (i = 1 ; i < len ; i++){
            if ((top >= 0) && matchingFunc(stack.get(top) , s.charAt(i) )) {
                stack.remove(top);
                top--;
            } else {
                stack.add(s.charAt(i));
                top++;
            }
        }
        if (top == -1) {
            return true;
        } else {
            return false;
        }
    }

    public boolean matchingFunc(char x, char y) {
        if (x=='(' && y == ')') {
            return true;
        }
        if (x=='{' && y == '}') {
            return true;
        }
        if (x=='[' && y == ']') {
            return true;
        }
        return false;
    }
}
