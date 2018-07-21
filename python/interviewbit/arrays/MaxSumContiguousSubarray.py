import sys

class Solution:
    # @param A : tuple of integers
    # @return an integer
    def maxSubArray(self, A):
        if len(A) == 0:
            return 0;
        currentSum = 0;
        maxSum = sys.minint;
        for a in A:
            currentSum += a;
            maxSum = max(currentSum, maxSum);
            if currentSum < 0:
                currentSum = 0;
        return maxSum;