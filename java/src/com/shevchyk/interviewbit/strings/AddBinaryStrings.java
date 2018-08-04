package com.shevchyk.interviewbit.strings;

public class AddBinaryStrings {
    public String addBinary(String A, String B) {
        int carry = 0;
        StringBuilder res = new StringBuilder();
        int indexA = A.length() - 1;
        int indexB = B.length() - 1;
        while (indexA >= 0 || indexB >= 0 || carry != 0) {
            int current = carry;
            if (indexA >= 0) current += A.charAt(indexA--) - '0';
            if (indexB >= 0) current += B.charAt(indexB--) - '0';
            carry = current >> 1;
            current = current & 1;
            res.append(current == 1 ? '1' : '0');
        }
        res.reverse();
        return res.toString();
    }
}
