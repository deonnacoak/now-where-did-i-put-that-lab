#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/where.hpp"

using namespace std;

TEST_CASE("Testing the location function", "[location]") {
    string text = "The quick brown fox";

    SECTION("Character search") {
        REQUIRE(location(text, 'e') == 2);
        REQUIRE(location(text, 'z') == -1);
    }

    SECTION("String search") {
        REQUIRE(location(text, "quick") == 4);
        REQUIRE(location(text, "quiet") == -1);
    }

    SECTION("Edge cases") {
        REQUIRE(location(text, "") == 0); // Empty search returns start
        REQUIRE(location("hi", "longer than text") == -1);
    }
}