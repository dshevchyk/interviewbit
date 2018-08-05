//
//  main.cpp
//  Interviewbit
//
//  Created by Димаська on 21.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include <iostream>
#include "Factory1.hpp"
#include "AbstractObjectA.h"
#include "AbstractObjectB.h"
int main(int argc, const char * argv[]) {
    Factory1 factory;
    auto objectA = factory.createObjectA();
    auto objectB = factory.createObjectB();
    objectA->testA();
    objectB->testB();
    return 0;
}
