//
//  ProtorypeFactory.cpp
//  Interviewbit
//
//  Created by Димаська on 06.08.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "ProtorypeFactory.h"
#include "ClonableFactory1.hpp"
#include "ClonableFactory2.hpp"
#include "Clonable.h"

using std::make_shared;

shared_ptr<Clonable> ProtorypeFactory::getFactory(ClonableType type) {
    auto it = m_prototypes.find(type);
    if (it != m_prototypes.end()) {
        auto obj = it->second.lock();
        if (obj) return obj->clone();
    }
    shared_ptr<Clonable> newObj;
    switch (type) {
        case ClonableType::Factory1:
            newObj = make_shared<ClonableFactory1>();
            break;
        case ClonableType::Factory2:
            newObj = make_shared<ClonableFactory2>();
            break;
            
        default:
            break;
    }
    m_prototypes[type] = newObj;
    return newObj;
}
