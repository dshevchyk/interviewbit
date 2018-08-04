//
//  IntegerToRoman.cpp
//  Interviewbit
//
//  Created by Димаська on 04.08.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "IntegerToRoman.hpp"
#include <array>

using std::array;

string Solution::intToRoman(int A) {
    const array<string, 4> M{"", "M", "MM", "MMM"};
    const array<string, 10> C{"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    const array<string, 10> X{"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    const array<string, 10> I{"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    return M[A / 1000] + C[A % 1000 / 100] + X[A % 100 / 10] + I[A % 10];
}
