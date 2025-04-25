//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "sum_variadic.h"
using namespace std;

static void test_4() {
    REQUIRE(utils::math::sum_variadic(-1, -2, -3, 6) == 0);
}

TEST_CASE("Question #1.4") {
    execute_test("question_1_test_4.in", test_4);
}