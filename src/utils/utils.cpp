//
// Created by shalaga44 on 11/19/20.
//

#include "utils/utils.h"
#include <iostream>


void println(const std::string &msg) {
    std::cout << msg << std::endl;
}

void println(double d, const std::string &string) {
    std::cout << d << " " << string << std::endl;
}
