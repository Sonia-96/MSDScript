//
//  main.cpp
//  HW2_Expression
//
//  Created by Yue Sun on 1/12/23.
//

#include <iostream>
#include "cmdline.h"
#include "expr.hpp"
#include "catch.h"

int add(int a, int b) {
    return a + b;
}

int main(int argc, const char * argv[]) {
    use_arguments(argc, argv);
    return 0;
}
