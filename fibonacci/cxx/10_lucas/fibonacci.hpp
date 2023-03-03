#pragma once

#include "recursion.hpp"

inline mp::cpp_int fibonacci(int n) {
  return recursion(0, 1, n);
}
