//
//  Singleton.hpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 08.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#ifndef Singleton_hpp
#define Singleton_hpp

class Singleton {
public:
    static Singleton &instance();
    
    // delete copy and move constructors and assign operators
    Singleton(const Singleton &) = delete;             // Copy construct
    Singleton(Singleton &&) = delete;                  // Move construct
    Singleton &operator=(const Singleton  &) = delete;  // Copy assign
    Singleton &operator=(Singleton &&) = delete;      // Move assign
    
protected:
    Singleton() = default;
    ~Singleton() = default;
    
};

#endif /* Singleton_hpp */
