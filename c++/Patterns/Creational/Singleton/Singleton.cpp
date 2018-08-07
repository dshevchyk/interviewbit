//
//  Singleton.cpp
//  Interviewbit
//
//  Created by Димаська on 08.08.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "Singleton.hpp"

Singleton &Singleton::instance() {
    static Singleton myInstance;
    return myInstance;
}
