//
//  LengthOfLastWord.cpp
//  Interviewbit
//
//  Created by Димаська on 04.08.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "LengthOfLastWord.hpp"

int Solution::lengthOfLastWord(const string A) {
    static constexpr char space = ' ';
    auto rbegin = A.rbegin();
    while (rbegin != A.rend() && *rbegin == space) ++rbegin;
    auto rend = rbegin;
    while (rend != A.rend() && *rend != space) ++rend;
    return static_cast<int>(distance(rbegin, rend));
}
