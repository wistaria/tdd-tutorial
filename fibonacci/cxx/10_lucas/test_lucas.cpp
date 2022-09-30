#include <catch2/catch_test_macros.hpp>
#include <tuple>
#include <vector>
#include "lucas.hpp"

TEST_CASE("lucas", "test") {
  std::vector<std::tuple<int, mp::cpp_int>> cases {{-2, 3}, {-1, -1}, {0, 2}, {1, 1}, {2, 3}, {3, 4}, {10, 123}, {40, 228826127}, {100, mp::cpp_int("792070839848372253127")}};
  for (auto c : cases) {
    REQUIRE(lucas(std::get<0>(c)) == std::get<1>(c));
    if (std::get<0>(c) > 0)
      REQUIRE(lucas(std::get<0>(c)) > 0);
  }
}
