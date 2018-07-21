package com.shevchyk.interviewbit.arrays;

import java.util.ArrayList;

public class MaxSumContiguousSubarray {
    public int coverPoints(ArrayList<Integer> A) {
        if (A.isEmpty()) return 0;
        int currentSum = 0;
        int maxSum = Integer.MIN_VALUE;
        for (int a : A) {
            currentSum += a;
            maxSum = Math.max(currentSum, maxSum);
            if (currentSum < 0) currentSum = 0;
        }
        return maxSum;
    }
}
