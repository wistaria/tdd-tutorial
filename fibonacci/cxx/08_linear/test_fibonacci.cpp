#include <catch2/catch_test_macros.hpp>
#include <tuple>
#include <vector>
#include "fibonacci.hpp"

TEST_CASE("fibonacci", "test") {
  const std::vector<std::tuple<int, int>> cases{{-2, -1}, {-1, 1}, {0, 0}, {1, 1}, {2, 1}, {3, 2}, {10, 55}, {40, 102334155}};
  for (auto&& nv : cases) {
    const auto n = std::get<0>(nv);
    const auto v = std::get<1>(nv);
    REQUIRE(fibonacci(n) == v);
  }
}
