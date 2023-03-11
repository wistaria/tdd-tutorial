#include <catch2/catch_test_macros.hpp>
#include <tuple>
#include <vector>
#include "fibonacci.hpp"

TEST_CASE("fibonacci", "test") {
  const std::vector<std::tuple<int, mp::cpp_int>> cases{{-2, -1}, {-1, 1}, {0, 0}, {1, 1}, {2, 1}, {3, 2}, {10, 55}, {40, 102334155}, {100, mp::cpp_int("354224848179261915075")}};
  for (auto &&nv : cases) {
    const auto n = std::get<0>(nv);
    const auto v = std::get<1>(nv);
    REQUIRE(fibonacci(n) == v);
    if (n > 0)
      REQUIRE(fibonacci(n) > 0);
  }
}
