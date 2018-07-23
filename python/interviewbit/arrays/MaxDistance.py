from collections import namedtuple

Pair = namedtuple("Pair", ["first", "second"])

class Solution:
    # @param A : tuple of integers
    # @return an integer
    def maximumGap(self, A):
        if len(A) == 0:
            return 0;
        sortedHash = [];
        for i in range(0, len(A)):
            sortedHash.insert(i, Pair(A[i],i));

        sortedHash.sort();

        ans = 0;
        rmax = sortedHash[len(sortedHash) - 1].second;
        for i in range(len(sortedHash) - 2, -1, -1):
            ans = max(ans, rmax - sortedHash[i].second);
            rmax = max(rmax, sortedHash[i].second);

        return ans;