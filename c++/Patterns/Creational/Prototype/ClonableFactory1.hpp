//
//  ClonableFactory1.hpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 05.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#ifndef ClonableFactory1_hpp
#define ClonableFactory1_hpp

#include "Clonable.h"
#include "Factory1.hpp"

class ClonableFactory1: public Factory1, public Clonable {
public:
    ClonableType type() const override;
    shared_ptr<Clonable> clone() override;
};

#endif /* ClonableFactory1_hpp */
