//
//  ClonableFactory2.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 05.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "ClonableFactory2.hpp"

ClonableType ClonableFactory2::type() const {
    return ClonableType::Factory2;
}

shared_ptr<Clonable> ClonableFactory2::clone() {
    return shared_ptr<ClonableFactory2>(new ClonableFactory2(*this));
}
