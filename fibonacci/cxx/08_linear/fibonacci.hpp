#pragma once

#include <tuple>

inline int fibonacci(int n) {
  int v0 = 0;
  int v1 = 1;
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
