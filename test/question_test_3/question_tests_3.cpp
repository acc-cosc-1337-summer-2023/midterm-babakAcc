#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Testing commission calculating function.")
{
	REQUIRE(get_sales(100) == 5.0);
	REQUIRE(get_sales(750) == 45.0);
	REQUIRE(get_sales(1100) == 77.0);
	REQUIRE(get_sales(1750) == 140.0);
	
}