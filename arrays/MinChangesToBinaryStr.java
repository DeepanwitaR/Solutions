// Given a binary string, how many toggles needed minimum to have an alternating string.

class Solution {
    public int minOperations(String s) {
        StringBuilder str = new StringBuilder(s);
        int countWithStart0 = 0;
        int countWithStart1 = 0;

        int len = s.length();
        if (len == 1) {
            return 0;
        }
        for (int i=0 ; i < len ; i++) {
            // for the even positions.
            if (i % 2 == 0) {
                if (str.charAt(i) == '0') {
                    // if we want it to be 0 at first.
                    // no countWithStart0++
                    // what if we wanted this to be 0? we can also logically handle it here instead of a second round of logic later
                    countWithStart1++;
                } else {
                    countWithStart0++;
                    // no countWithStart1++
                }
            } else {
                if (str.charAt(i) == '1') {
                    // no countWithStart0++, since this is what we want with 0 as start
                    countWithStart1++;
                } else {
                    countWithStart0++; // since this needs to be 1.
                }
            }
        }

        return Math.min(countWithStart0, countWithStart1);
    }

}
