//
//  HotelBookingPossible.cpp
//  Interviewbit
//
//  Created by Димаська on 22.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "HotelBookingPossible.hpp"

bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    int arr = 0;
    int dep = 0;
    int count = 0;
    
    sort(arrive.begin(), arrive.end());
    sort(depart.begin(), depart.end());
    
    while (arr < arrive.size() && dep < depart.size()) {
        if (arrive[arr]<depart[dep]) {
            count++;
            arr++;
            if (count>K) return false;
        }
        else {
            count--;
            dep++;
        }
    }
    
    return true;
}
