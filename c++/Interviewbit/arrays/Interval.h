//
//  Interval.h
//  Interviewbit
//
//  Created by Димаська on 29.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#ifndef Interval_h
#define Interval_h

struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

#endif /* Interval_h */
