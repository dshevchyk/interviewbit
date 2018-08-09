//
//  Factory1.hpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 05.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#ifndef Factory1_hpp
#define Factory1_hpp

#include "AbstractFactory.hpp"

class Factory1: public AbstractFactory {
public:
    shared_ptr<AbstractObjectA> createObjectA() const override;
    shared_ptr<AbstractObjectB> createObjectB() const override;
};

#endif /* Factory1_hpp */
