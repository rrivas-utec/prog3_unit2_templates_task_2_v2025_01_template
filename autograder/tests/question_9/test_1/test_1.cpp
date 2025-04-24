//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "dimensions.h"
using namespace std;

static void test_1() {
    REQUIRE(geometry::meta::dimensions<1, 2, 3>::total() == 6);
}

TEST_CASE("Question #9.1") {
    execute_test("question_9_test_1.in", test_1);
}