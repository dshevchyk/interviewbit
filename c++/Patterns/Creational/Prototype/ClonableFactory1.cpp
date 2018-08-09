//
//  ClonableFactory1.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 05.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "ClonableFactory1.hpp"

ClonableType ClonableFactory1::type() const {
    return ClonableType::Factory1;
}
shared_ptr<Clonable> ClonableFactory1::clone() {
    return shared_ptr<ClonableFactory1>(new ClonableFactory1(*this));
}
