cmake_minimum_required(VERSION 3.0)
cmake_policy(SET CMP0048 NEW)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(daily VERSION 0.0.1 LANGUAGES CXX)


add_library(daily daily.cc)
target_include_directories(daily PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_options(daily PRIVATE -fPIC -fno-rtti -fno-exceptions -Wall)


# For testing setting
option(DAILY_BUILD_TESTS "Build unit tests" ON)
if (DAILY_BUILD_TESTS)
  add_executable(daily_test daily_test.cc)
  target_link_libraries(daily_test daily)
endif()


# For make install
## pc.in configuration
if(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
  set(CMAKE_INSTALL_PREFIX /usr)
endif()
configure_file("daily.pc.in" "daily.pc" @ONLY)
## install
install(TARGETS daily DESTINATION lib/${CMAKE_LIBRARY_ARCHITECTURE})
install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/daily.h" DESTINATION include/${CMAKE_LIBRARY_ARCHITECTURE})
install(FILES "${CMAKE_CURRENT_BINARY_DIR}/daily.pc" DESTINATION lib/${CMAKE_LIBRARY_ARCHITECTURE}/pkgconfig)
