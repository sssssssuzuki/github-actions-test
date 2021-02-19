// File: c_api.h
// Project: sayhellocapi
// Created Date: 19/02/2021
// Author: Shun Suzuki
// -----
// Last Modified: 19/02/2021
// Modified By: Shun Suzuki (suzuki@hapis.k.u-tokyo.ac.jp)
// -----
// Copyright (c) 2021 Hapis Lab. All rights reserved.
// 

#pragma once

#if WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT __attribute__((visibility("default")))
#endif

extern "C" {
EXPORT void C_SAYHELLO();
}
