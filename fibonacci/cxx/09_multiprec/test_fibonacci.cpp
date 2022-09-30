#include <catch2/catch_test_macros.hpp>
#include <tuple>
#include <vector>
#include "fibonacci.hpp"

TEST_CASE("fibonacci", "test") {
  std::vector<std::tuple<int, mp::cpp_int>> cases {{-2, -1}, {-1, 1}, {0, 0}, {1, 1}, {2, 1}, {3, 2}, {10, 55}, {40, 102334155}, {100, mp::cpp_int("354224848179261915075")}};
  for (auto c : cases) {
    REQUIRE(fibonacci(std::get<0>(c)) == std::get<1>(c));
    if (std::get<0>(c) > 0)
      REQUIRE(fibonacci(std::get<0>(c)) > 0);
  }
}
