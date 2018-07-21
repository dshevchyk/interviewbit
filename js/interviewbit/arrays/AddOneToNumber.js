module.exports = {
    //param A : array of integers
    //return a array of integers
    plusOne : function(A) {
        if (A.length == 0) return [1];
        var carry = 1;
        const numSystem = 10;
        for(var i = A.length - 1; i >= 0; i--) {
            A[i] += carry;
            carry = parseInt(A[i] / numSystem);
            A[i] %= numSystem;
            if (carry == 0) break;
        }
        if (carry > 0) {
            A.unshift(carry);
        }
        var startPos = 0;
        while (A.length - startPos > 1 && A[startPos] == 0) ++startPos;
        return A.slice(startPos, A.length);
    }
};
