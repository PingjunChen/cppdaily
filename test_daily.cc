#if !DAILY_TEST_CUSTOM_CONFIG
#define DAILY_TEST_CASE(name) static void name()
#define DAILY_TEST_ASSERT(b) assert(b)
#endif // DAILY_TEST_CUSTOM_CONFIG


#include <cassert>
#include <string>
#include <iostream>
#include <sstream>

#include "daily.h"

#include <vector>
#include <set>
#include <map>
#include <list>

using namespace daily;


DAILY_TEST_CASE(daily_test) {
    std::cout << ">> Testing Mathmatics \n" << std::flush;
    DAILY_TEST_ASSERT(in_range(2, 0, 2) == true);
    DAILY_TEST_ASSERT(in_range('a', 'b', 'z') == false);
    DAILY_TEST_ASSERT(in_range(1.0, 0.0, 2.0) == true);
    std::cout << "Congratulations, all tests are passed!!!\n" << std::flush; 
}


int main(int argc, char **argv) {
    daily_test();
}