////
//  LetterPhone.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 12.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//


#include "LetterPhone.hpp"
#include <unordered_map>

using std::unordered_map;

namespace {
    
void helper(string::iterator currentIt,
            string::iterator end,
            string &currentCombination,
            vector<string> &res) {
    if (currentIt == end) {
        res.push_back(currentCombination);
        return;
    }
    const static unordered_map<char, vector<char>> cacheRepresentations {
        {'0', {'0'}                 },
        {'1', {'1'}                 },
        {'2', {'a' , 'b', 'c'}      },
        {'3', {'d' , 'e', 'f'}      },
        {'4', {'g' , 'h', 'i'}      },
        {'5', {'j' , 'k', 'l'}      },
        {'6', {'m' , 'n', 'o'}      },
        {'7', {'p' , 'q', 'r', 's'} },
        {'8', {'t' , 'u', 'v'}      },
        {'9', {'w' , 'x', 'y', 'z'  }}
    };
    auto representations = cacheRepresentations.find(*currentIt)->second;
    for (auto c : representations) {
        currentCombination.push_back(c);
        helper(currentIt+1, end, currentCombination, res);
        currentCombination.pop_back();
    }
}
    
}

vector<string> Solution::letterCombinations(string A) {
    vector<string> res;
    string current;
    helper(A.begin(), A.end(), current, res);
    return res;
}
