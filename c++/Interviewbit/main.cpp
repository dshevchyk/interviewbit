//
//  main.cpp
//  Interviewbit
//
//  Created by Димаська on 21.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include <iostream>
#include "AbstractFactory.hpp"
#include "ProtorypeFactory.h"
#include "AbstractObjectA.h"
#include "AbstractObjectB.h"
#include "Clonable.h"

using std::dynamic_pointer_cast;

int main(int argc, const char * argv[]) {
    ProtorypeFactory prototypes;
    auto factory1 = dynamic_pointer_cast<AbstractFactory>(prototypes.getFactory(ClonableType::Factory1));
    auto factory2 = dynamic_pointer_cast<AbstractFactory>(prototypes.getFactory(ClonableType::Factory2));
    auto objectA1 = factory1->createObjectA();
    auto objectB1 = factory1->createObjectB();
    auto objectA2 = factory2->createObjectA();
    auto objectB2 = factory2->createObjectB();
    objectA1->testA();
    objectB1->testB();
    objectA2->testA();
    objectB2->testB();
    return 0;
}
