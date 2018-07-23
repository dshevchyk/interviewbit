package com.shevchyk.interviewbit.arrays;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;

class Pair<K, T> {
    public Pair(K k, T v) {
        key = k;
        value = v;
    }
    public K getKey() {
        return key;
    }

    public void setKey(K key) {
        this.key = key;
    }

    public T getValue() {
        return value;
    }

    public void setValue(T value) {
        value = value;
    }

    private K key;
    private T value;
}
public class MaxDistance {
    // DO NOT MODIFY THE LIST. IT IS READ ONLY
    public int maximumGap(final List<Integer> A) {
        if(A.isEmpty()) return 0;
        List<Pair<Integer, Integer>> sortedHash = new ArrayList<>();
        for (int i = 0; i < A.size(); ++i) {
            sortedHash.add(new Pair(A.get(i), i));
        }
        sortedHash.sort(new Comparator<Pair<Integer, Integer>>() {
            @Override
            public int compare(Pair<Integer, Integer> o1, Pair<Integer, Integer> o2) {
                return o1.getKey() > o2.getKey() ?
                        1 :
                        o1.getKey() < o2.getKey() ? -1 : 0;
            }
        });

        int ans = 0;
        int rmax = sortedHash.get(sortedHash.size() -1).getValue();
        for (int i = sortedHash.size() - 2; i >= 0; --i) {
            ans = Math.max(ans, rmax - sortedHash.get(i).getValue());
            rmax = Math.max(rmax, sortedHash.get(i).getValue());
        }

        return ans;
    }
}
