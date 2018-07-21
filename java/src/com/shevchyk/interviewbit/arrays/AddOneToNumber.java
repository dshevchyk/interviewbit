package com.shevchyk.interviewbit.arrays;

import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.ListIterator;

public class AddOneToNumber {
    public ArrayList<Integer> plusOne(ArrayList<Integer> A) {
        if (A.isEmpty()) return new ArrayList<Integer>(){{ add(1); }};
        final int numSystem = 10;
        int carry = 1;

        ListIterator iter = A.listIterator(A.size());
        while (iter.hasPrevious()) {
            Integer current = (Integer) iter.previous();
            int newVal = current + carry;
            iter.set(newVal % numSystem);
            carry = newVal / numSystem;
            if(carry == 0) break;
        }
        if (carry != 0) {
            A.add(0, carry);
        }
        int startPos = 0;
        while (A.size() - startPos > 1 && A.get(startPos) == 0) ++startPos;
        return new ArrayList<Integer>(A.subList(startPos, A.size()));
    }
}
