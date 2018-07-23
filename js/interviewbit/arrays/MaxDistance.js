module.exports = {
    //param A : array of integers
    //return an integer
    maximumGap : function(A){
        if(A.length == 0) return 0;
        var sortedHash = [];
        for (var i = 0; i < A.length; ++i) {
            sortedHash[i] = { key: A[i], value: i};
        }

        sortedHash.sort(compare);

        var ans = 0;
        var rmax = sortedHash[sortedHash.length -1].value;
        for (var i = sortedHash.length - 2; i >= 0; --i) {
            ans = Math.max(ans, rmax - sortedHash[i].value);
            rmax = Math.max(rmax, sortedHash[i].value);
        }

        return ans;
    }
};
function compare(a,b) {
    if (a.key < b.key)
        return -1;
    if (a.key > b.key)
        return 1;
    return 0;
}