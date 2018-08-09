//
//  ProtorypeFactory.h
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 05.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#ifndef ProtorypeFactory_h
#define ProtorypeFactory_h

#include "ClonableType.h"
#include <memory>
#include <unordered_map>

using std::shared_ptr;
using std::weak_ptr;
using std::unordered_map;

class Clonable;

class ProtorypeFactory {
public:
    shared_ptr<Clonable> getFactory(ClonableType type);
private:
    unordered_map<ClonableType, weak_ptr<Clonable>> m_prototypes;
};

#endif /* ProtorypeFactory_h */
