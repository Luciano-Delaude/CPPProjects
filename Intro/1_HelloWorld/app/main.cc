#include <iostream>

#include<cxxopts.hpp>
#include<fmt/format.h>
#include<spdlog/spdlog.h>
#include <nlohmann/json.hpp>


#include "my_lib.h"
#include "config.hpp"

/**
 * @brief Print out hello world and test other liraries.
 *
 * @return
 */

int main(){
    std::cout<< project_name <<std::endl;
    std::cout<< project_version <<std::endl;

    std::cout<<"FMT Lib Version: "
            << FMT_VERSION<<std::endl;

    std::cout<<"CXXOPTS Lib Version: "
            << CXXOPTS__VERSION_MAJOR << "."
            << CXXOPTS__VERSION_MINOR << "."
            << CXXOPTS__VERSION_PATCH <<std::endl;

    std::cout<<"SPDLOG Lib Version: "
            << SPDLOG_VER_MAJOR << "."
            << SPDLOG_VER_MINOR << "."
            << SPDLOG_VER_PATCH <<std::endl;


    print_hello_world();

    return 0;
}
