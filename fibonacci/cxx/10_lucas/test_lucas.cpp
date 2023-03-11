#include <catch2/catch_test_macros.hpp>
#include <tuple>
#include <vector>
#include "lucas.hpp"

TEST_CASE("lucas", "test") {
  const std::vector<std::tuple<int, mp::cpp_int>> cases{{-2, 3}, {-1, -1}, {0, 2}, {1, 1}, {2, 3}, {3, 4}, {10, 123}, {40, 228826127}, {100, mp::cpp_int("792070839848372253127")}};
  for (auto &&nv : cases) {
    const auto n = std::get<0>(nv);
    const auto v = std::get<1>(nv);
    REQUIRE(lucas(n) == v);
    if (n > 0)
      REQUIRE(lucas(n) > 0);
  }
}
