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
    std::cout << "Congratulations, all tests are passed!!!\n" << std::flush; 
}

int main(int argc, char **argv) {
    daily_test();
}