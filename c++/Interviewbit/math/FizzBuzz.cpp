//
//  FizzBuzz.cpp
//  Interviewbit
//
//  Created by Димаська on 23.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "FizzBuzz.hpp"

using std::to_string;

vector<string> Solution::fizzBuzz(int A) {
    vector<string> res;
    res.reserve(A);
    ++A;
    for (int i = 1; i < A; ++i){
        if (i % 3 == 0 && i % 5 == 0) res.push_back("FizzBuzz");
        else if(i % 3 == 0) {
            res.push_back("Fizz");
        } else if (i % 5 == 0) {
            res.push_back("Buzz");
        } else {
            res.push_back(to_string(i));
        }
    }
    return res;
}
