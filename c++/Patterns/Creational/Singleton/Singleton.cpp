//
//  Singleton.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 08.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "Singleton.hpp"

Singleton &Singleton::instance() {
    static Singleton myInstance;
    return myInstance;
}
