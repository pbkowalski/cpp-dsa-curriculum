#define CATCH_CONFIG_MAIN  // Only in one cpp file
#include <catch2/catch.hpp>
#include "data_structures/stack.hpp"


TEST_CASE("Stack operations", "[stack]") {
    dsa::Stack<int> s;
    REQUIRE(s.isEmpty());
    
    s.push(1);
    REQUIRE(!s.isEmpty());
    
    REQUIRE(s.pop() == 1);
}