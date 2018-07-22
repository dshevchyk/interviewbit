module.exports = {
    //param A : array of integers
    //param B : array of integers
    //return an integer
    setZeroes: function (A) {
        if (A.length == 0 || A[0].length == 0) return;
        var n = A.length;
        var m = A[0].length;
        var setZeroFrontRow = false;
        var setZeroFrontCol = false;
        for (var i = 0; i < n; ++i) {
            if (A[i][0] == 0) {
                setZeroFrontCol = true;
                break;
            }
        }
        for (var j = 0; j < m; ++j) {
            if (A[0][j] == 0) {
                setZeroFrontRow = true;
                break;
            }
        }

        for (var i = 1; i < n; ++i) {
            for (var j = 1; j < m; ++j) {
                if (A[i][j] == 0) {
                    A[i][0] = 0;
                    A[0][j] = 0;
                }
            }
        }
        for (var i = 1; i < n; ++i) {
            if (A[i][0] == 0) {
                for (var j = 1;j < m;++j) {
                    A[i][j] = 0;
                }
            }
        }
        for (var j = 1; j < m; ++j) {
            if (A[0][j] == 0) {
                for (var i = 1; i < n; ++i) {
                    A[i][j] = 0;
                }
            }
        }
        if (setZeroFrontCol) {
            for (var i = 0; i < n; ++i) {
                A[i][0] = 0;
            }
        }
        if (setZeroFrontRow) {
            for (var j = 0; j < m; ++j) {
                A[0][j] = 0;
            }
        }
    }
}