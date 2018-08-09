//
//  Factory1.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 05.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "Factory1.hpp"
#include "ConcreteObjectA1.hpp"
#include "ConcreteObjectB1.hpp"

using std::make_shared;

shared_ptr<AbstractObjectA> Factory1::createObjectA() const {
    return make_shared<ConcreteObjectA1>();
}

shared_ptr<AbstractObjectB> Factory1::createObjectB() const {
    return make_shared<ConcreteObjectB1>();
}
