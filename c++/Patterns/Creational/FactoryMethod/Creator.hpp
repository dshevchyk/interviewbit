//
//  Creator.hpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 08.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#ifndef Creator_hpp
#define Creator_hpp

class AbstractProduct;

class Creator {
public:
    AbstractProduct *createProduct1();
    AbstractProduct *createProduct2();
    
};

#endif /* Creator_hpp */
