class Solution:
    # @param A : list of integers
    # @param B : list of integers
    # @return an integer
    def coverPoints(self, A, B):
        if len(A) == 0:
            return 0;
        steps = 0;
        current_x = A[0];
        current_y = B[0];
        for i in range(1, len(A)):
            steps += max(abs(A[i] - current_x), abs(B[i] - current_y));
            current_x = A[i];
            current_y = B[i];
        return steps;
