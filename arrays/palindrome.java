// Find out whether the string is a palindrome or not. (Negative numbers are not.)
class Solution {
    public boolean isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        ArrayList<Integer> list = new ArrayList<>();
        while (x > 0) {
            list.add(x % 10);
            x = x / 10;
        }
        int size = list.size();
        for (Integer i=0; i < list.size()/2 ; i++){
            if (list.get(i) != (list.get(size-i-1))){
                return false;
            }
        }
        return true;
    }

}
