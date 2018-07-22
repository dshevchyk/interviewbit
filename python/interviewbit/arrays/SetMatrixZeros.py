class Solution:
    # @param A : list of list of integers
    # @return the same list modified
    def setZeroes(self, A):
        if len(A) == 0 or len(A[0]) == 0:
            return ;

        n = len(A);
        m = len(A[0]);

        setZeroFrontRow = False;
        setZeroFrontCol = False;

        for i in range(0, n):
            if A[i][0] == 0:
                setZeroFrontCol = True;
                break;

        for j in range(0, m):
            if A[0][j] == 0:
                setZeroFrontRow = True;
                break;

        for i in range(1, n):
            for j in range(1, m):
                if A[i][j] == 0:
                    A[i][0] = 0;
                    A[0][j] = 0;

        for i in range(1, n):
            if A[i][0] == 0:
                for j in range(1, m):
                    A[i][j] = 0;

        for j in range(1, m):
            if A[0][j] == 0:
                for i in range(1, n):
                    A[i][j] = 0;

        if setZeroFrontCol:
            for i in range(0, n):
                A[i][0] = 0;

        if setZeroFrontRow:
            for j in range(0, m):
                A[0][j] = 0;

        return A;