#pragma once

#include <tuple>
#include <boost/multiprecision/cpp_int.hpp>

namespace mp = boost::multiprecision;

mp::cpp_int recursion(mp::cpp_int v0, mp::cpp_int v1, int n) {
  if (n < 0) {
    for (int i = -1; i >= n; --i)
      std::tie(v0, v1) = std::make_tuple(v1 - v0, v0);
    return v0;
  }
  if (n == 0)
    return v0;
  if (n == 1)
    return v1;
  for (int i = 2; i <= n; ++i)
    std::tie(v1, v0) = std::make_tuple(v0 + v1, v1);
  return v1;
}
