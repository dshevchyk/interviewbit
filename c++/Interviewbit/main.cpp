//
//  main.cpp
//  Interviewbit
//
//  Created by Димаська on 21.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include <iostream>
#include "NobleInteger.hpp"

int main(int argc, const char * argv[]) {
    Solution s;
    vector<int> A{4, -9, 8, 5, -1, 7, 5, 3 };
    int res = s.solve(A);
    std::cout << "res = " << res << std::endl;
    return 0;
}
