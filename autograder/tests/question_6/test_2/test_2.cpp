//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "static_array.h"
using namespace std;

static void test_2() {
    static_array<int, 5> arr = {1, 2, 3, 4, 5};
    REQUIRE(std::accumulate(arr.begin(), arr.end(), 0) == 15);
}

TEST_CASE("Question #6.2") {
    execute_test("question_6_test_2.in", test_2);
}