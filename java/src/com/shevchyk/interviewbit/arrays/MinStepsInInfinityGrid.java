package com.shevchyk.interviewbit.arrays;

import java.util.ArrayList;

public class MinStepsInInfinityGrid {
    public int coverPoints(ArrayList<Integer> A, ArrayList<Integer> B) {
        if (A.isEmpty()) {
            return 0;
        }
        int steps = 0;
        int currentX = A.get(0);
        int currentY = B.get(0);
        for (int i = 1; i < A.size(); ++i) {
            steps += Math.max(Math.abs(A.get(i) - currentX), Math.abs(B.get(i) - currentY));
            currentX = A.get(i);
            currentY = B.get(i);
        }
        return steps;
    }
}
