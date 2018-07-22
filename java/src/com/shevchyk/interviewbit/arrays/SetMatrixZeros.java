package com.shevchyk.interviewbit.arrays;

import java.util.ArrayList;

public class SetMatrixZeros {
    public void setZeroes(ArrayList<ArrayList<Integer>> A) {
        if (A.isEmpty() || A.get(0).isEmpty()) return;
        int n = A.size();
        int m = A.get(0).size();
        boolean setZeroFrontRow = false;
        boolean setZeroFrontCol = false;
        for (int i = 0; i < n; ++i) {
            if (A.get(i).get(0) == 0) {
                setZeroFrontCol = true;
                break;
            }
        }
        for (int j = 0; j < m; ++j) {
            if (A.get(0).get(j) == 0) {
                setZeroFrontRow = true;
                break;
            }
        }

        for(int i = 1; i < n; ++i) {
            for(int j = 1; j < m; ++j) {
                if(A.get(i).get(j) == 0) {
                    A.get(i).set(0, 0);
                    A.get(0).set(j, 0);
                }
            }
        }
        for (int i = 1; i < n; ++i) {
            if (A.get(i).get(0) == 0) {
                for (int j = 1; j < m; ++j) {
                    A.get(i).set(j, 0);
                }
            }
        }
        for (int j = 1; j < m; ++j) {
            if (A.get(0).get(j) == 0) {
                for (int i = 1; i < n; ++i) {
                    A.get(i).set(j, 0);
                }
            }
        }
        if (setZeroFrontCol) {
            for (int i = 0; i < n; ++i) {
                A.get(i).set(0, 0);
            }
        }
        if (setZeroFrontRow) {
            for (int j = 0; j < m; ++j) {
                A.get(0).set(j, 0);
            }
        }
    }
}
