//
//  Clonable.h
//  Interviewbit
//
//  Created by Димаська on 05.08.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#ifndef Clonable_h
#define Clonable_h

#include "ClonableType.h"
#include <memory>

using std::shared_ptr;

class Clonable {
public:
    virtual ClonableType type() const = 0;
    virtual shared_ptr<Clonable> clone() = 0;
};

#endif /* Clonable_h */
