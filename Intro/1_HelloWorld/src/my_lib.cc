#include <iostream>

#include <nlohmann/json.hpp>

#include "my_lib.h"

void print_hello_world(){
    std::cout<<"Hello world"<<std::endl;

     std::cout<<"JSON Lib Version: "
            << NLOHMANN_JSON_VERSION_MAJOR << "."
            << NLOHMANN_JSON_VERSION_MINOR << "."
            << NLOHMANN_JSON_VERSION_PATCH <<std::endl;
}

unsigned int factorial(unsigned int number){
    return number <= 1 ? 1 : factorial(number - 1)*number;
}
