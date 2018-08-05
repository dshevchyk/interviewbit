//
//  Factory2.hpp
//  Interviewbit
//
//  Created by Димаська on 05.08.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#ifndef Factory2_hpp
#define Factory2_hpp

#include "AbstractFactory.hpp"

class Factory2: public AbstractFactory {
public:
    shared_ptr<AbstractObjectA> createObjectA() const override;
    shared_ptr<AbstractObjectB> createObjectB() const override;
};


#endif /* Factory2_hpp */
