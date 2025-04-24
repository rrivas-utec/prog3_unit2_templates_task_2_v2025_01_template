//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "sum_variadic.h"
#include "../../../../tools/catch/catch.hpp"
using namespace std;

static void test_1() {
    REQUIRE(utils::math::sum_variadic(1, 2, 3, 4) == 10);
}

TEST_CASE("Question #1.1") {
    execute_test("question_1_test_1.in", test_1);
}