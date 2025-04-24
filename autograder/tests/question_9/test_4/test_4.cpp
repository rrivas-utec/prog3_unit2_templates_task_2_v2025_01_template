//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "dimensions.h"
using namespace std;

static void test_4() {
    REQUIRE(!geometry::meta::dimensions<>::total() == 1);
}

TEST_CASE("Question #9.4") {
    execute_test("question_9_test_4.in", test_4);
}