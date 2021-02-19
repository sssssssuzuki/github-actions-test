// File: sequence.cpp
// Project: lib
// Created Date: 01/07/2020
// Author: Shun Suzuki
// -----
// Last Modified: 19/02/2021
// Modified By: Shun Suzuki (suzuki@hapis.k.u-tokyo.ac.jp)
// -----
// Copyright (c) 2020 Hapis Lab. All rights reserved.
//

#include "lib.hpp"

#include <iostream>

#if (_WIN32 || _WIN64)
#define OS_STR ("Windows")
#elif defined __APPLE__
#define OS_STR ("macOS")
#elif defined __linux__
#define OS_STR ("linux")
#else
#error "Not supported."
#endif

void SayHello() { std::cout << "Hello, " << OS_STR << "!" << std::endl; }
