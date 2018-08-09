//
//  Factory2.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 05.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "Factory2.hpp"
#include "ConcreteObjectA2.hpp"
#include "ConcreteObjectB2.hpp"

using std::make_shared;

shared_ptr<AbstractObjectA> Factory2::createObjectA() const {
    return make_shared<ConcreteObjectA2>();
}

shared_ptr<AbstractObjectB> Factory2::createObjectB() const {
    return make_shared<ConcreteObjectB2>();
}
