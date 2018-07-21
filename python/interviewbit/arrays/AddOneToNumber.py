import logging

class Solution:
    # @param A : list of integers
    # @return a list of integers
    def plusOne(self, A):
        lenA = len(A);
        if lenA == 0:
            return [1];
        carry = 1;
        numSystem = 10;
        for i in range(lenA - 1, -1, -1):
            A[i] += carry;
            carry = A[i] / numSystem;
            A[i] %= numSystem;
            if carry == 0:
                break;
        if carry > 0:
            A.insert(0, carry);
        startPos = 0;
        while A[startPos] == 0 and lenA - startPos > 1:
            startPos += 1;
        return A[startPos:];