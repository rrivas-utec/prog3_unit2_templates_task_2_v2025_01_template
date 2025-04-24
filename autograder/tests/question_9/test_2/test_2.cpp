//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "dimensions.h"
using namespace std;

static void test_2() {
    REQUIRE(geometry::meta::dimensions<4, 5>::total() == 20);
}

TEST_CASE("Question #9.2") {
    execute_test("question_9_test_2.in", test_2);
}