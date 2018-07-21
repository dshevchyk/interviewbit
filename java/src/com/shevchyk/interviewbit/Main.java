package com.shevchyk.interviewbit;

import com.shevchyk.interviewbit.arrays.*;

import java.util.ArrayList;

public class Main {

    public static void main(String[] args) {
        MinStepsInInfinityGrid solution = new MinStepsInInfinityGrid();
        ArrayList<Integer> a = new ArrayList<>() {{
            add(1);
            add(2);
        }};
        ArrayList<Integer> b = new ArrayList<>() {{
            add(2);
            add(4);
        }};
        solution.coverPoints(a, b);
    }
}
