#pragma once

#include <boost/multiprecision/cpp_int.hpp>

namespace mp = boost::multiprecision;

inline mp::cpp_int recursion(mp::cpp_int v0, mp::cpp_int v1, int n) {
  if (n < 0) {
    for (int i = -1; i >= n; --i) {
      auto v0_old = v0;
      v0 = v1 - v0_old;
      v1 = v0_old;
    }
    return v0;
  }
  if (n == 0)
    return v0;
  if (n == 1)
    return v1;
  for (int i = 2; i <= n; ++i) {
    auto v1_old = v1;
    v1 = v0 + v1_old;
    v0 = v1_old;
  }
  return v1;
}
