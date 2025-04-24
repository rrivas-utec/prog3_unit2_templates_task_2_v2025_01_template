//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "sum_variadic.h"
#include "../../../../tools/catch/catch.hpp"
using namespace std;

static void test_2() {
    REQUIRE(utils::math::sum_variadic(1.5, 2.5, 3.0) == 7.0);
}

TEST_CASE("Question #1.2") {
    execute_test("question_1_test_2.in", test_2);
}