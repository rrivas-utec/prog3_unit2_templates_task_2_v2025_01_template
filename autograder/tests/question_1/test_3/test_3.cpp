//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "sum_variadic.h"
#include "../../../../tools/catch/catch.hpp"
using namespace std;

static void test_3() {
    REQUIRE(utils::math::sum_variadic(42) == 42);
}

TEST_CASE("Question #1.3") {
    execute_test("question_1_test_3.in", test_3);
}