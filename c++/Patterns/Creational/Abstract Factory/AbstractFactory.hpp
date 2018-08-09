//
//  AbstractFactory.hpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 05.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#ifndef AbstractFactory_hpp
#define AbstractFactory_hpp

#include <memory>

using std::shared_ptr;

class AbstractObjectA;
class AbstractObjectB;

class AbstractFactory {
public:
    virtual shared_ptr<AbstractObjectA> createObjectA() const = 0;
    virtual shared_ptr<AbstractObjectB> createObjectB() const = 0;
};

#endif /* AbstractFactory_hpp */
