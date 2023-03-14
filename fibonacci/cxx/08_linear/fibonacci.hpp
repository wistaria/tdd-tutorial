#pragma once

inline int fibonacci(int n) {
  int v0 = 0;
  int v1 = 1;
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
