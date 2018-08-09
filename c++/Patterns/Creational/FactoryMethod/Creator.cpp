//
//  Creator.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 08.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "Creator.hpp"
#include "ConcreateProduct1.hpp"
#include "ConcreateProduct2.hpp"

AbstractProduct *Creator::createProduct1() {
    return new ConcreateProduct1();
}

AbstractProduct *Creator::createProduct2() {
    return new ConcreateProduct2();
}
