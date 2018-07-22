module.exports = {
        //param A : array of integers
        //param B : array of integers
        //return an integer
        coverPoints : function(A, B){
        if (A.length === 0) return 0;
        var steps = 0;
        var currentX = A[0];
        var currentY = B[0];
        for (var i = 1; i < A.length; ++i) {
            steps += Math.max(Math.abs(A[i] - currentX), Math.abs(B[i] - currentY));
            currentX = A[i];
            currentY = B[i];
        }
        return steps;
    }
};