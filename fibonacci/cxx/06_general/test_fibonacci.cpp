#include <catch2/catch_test_macros.hpp>
#include <tuple>
#include <vector>
#include "fibonacci.hpp"

TEST_CASE("fibonacci", "test") {
  std::vector<std::tuple<int, int>> cases {{0, 0}, {1, 1}, {2, 1}, {3, 2}, {10, 55}};
  for (auto c : cases) {
    REQUIRE(fibonacci(std::get<0>(c)) == std::get<1>(c));
  }
}
