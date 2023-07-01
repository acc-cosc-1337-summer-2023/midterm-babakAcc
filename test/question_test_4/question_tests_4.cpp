#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"
#include<iostream>
using std::string;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Testing binary converting function")
{
	string first = "00001010";
	string second = "10101010";
	string third = "11111111";

	REQUIRE(decimal_to_binary(10) == first);
	REQUIRE(decimal_to_binary(170) == second);
	REQUIRE(decimal_to_binary(255) == third);
}