module.exports = {
    //param A : array of integers
    //return an integer
    maxSubArray : function(A){
        if (A.length == 0) return 0;
        var currentSum = 0;
        var maxSum = 9007199254740992;
        for (var i = 0; i < A.length; ++i) {
            currentSum += a;
            maxSum = Math.max(currentSum, maxSum);
            if (currentSum < 0) currentSum = 0;
        }
        return maxSum;
    }
};
