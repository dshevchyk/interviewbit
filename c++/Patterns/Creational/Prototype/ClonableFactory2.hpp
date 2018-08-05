//
//  ClonableFactory2.hpp
//  Interviewbit
//
//  Created by Димаська on 05.08.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#ifndef ClonableFactory2_hpp
#define ClonableFactory2_hpp

#include "Clonable.h"
#include "Factory2.hpp"

class ClonableFactory2: public Factory2, public Clonable {
public:
    ClonableType type() const override;
    shared_ptr<Clonable> clone() override;
};

#endif /* ClonableFactory2_hpp */
