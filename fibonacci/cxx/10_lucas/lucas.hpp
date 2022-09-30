#pragma once

#include "recursion.hpp"

mp::cpp_int lucas(int n) {
  return recursion(2, 1, n);
}
