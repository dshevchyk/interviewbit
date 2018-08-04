module.exports = {
    //param A : string
    //param B : string
    //return a strings
    addBinary : function(A, B){
        var carry = 0;
        var res = "";
        var indexA = A.length - 1;
        var indexB = B.length - 1;
        while (indexA >= 0 || indexB >= 0 || carry != 0) {
            var current = carry;
            if (indexA >= 0) current += A[indexA--] - '0';
            if (indexB >= 0) current += B[indexB--] - '0';
            carry = current >> 1;
            current = current & 1;
            res = (current == 1 ? '1' : '0') + res;
        }
        return res;
    }
};
