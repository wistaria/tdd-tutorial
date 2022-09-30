#include <catch2/catch_test_macros.hpp>
#include "fibonacci.hpp"

TEST_CASE("fibonacci", "test") {
  REQUIRE(fibonacci(0) == 0);
  REQUIRE(fibonacci(1) == 1);
}
