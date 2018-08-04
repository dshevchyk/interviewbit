//
//  AddBinaryStrings.cpp
//  Interviewbit
//
//  Created by Димаська on 04.08.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "AddBinaryStrings.hpp"

using std::to_string;

string Solution::addBinary(string A, string B) {
    int carry = 0;
    string res;
    auto currentA = A.rbegin();
    auto currentB = B.rbegin();
    while (currentA != A.rend() || currentB != B.rend() || carry != 0) {
        //switch will work quicker then cast to int operation
        int current = carry;
        if (currentA != A.rend()) current += *(currentA++) - '0';
        if (currentB != B.rend()) current += *(currentB++) - '0';
        res = to_string(current % 2) + res;
        carry = current / 2;
    }
    return res;
}
