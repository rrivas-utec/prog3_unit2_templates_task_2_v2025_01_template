//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "max_static.h"
using namespace std;

static void test_1() {
    STATIC_REQUIRE(compile_time::max_static<5, 3>() == 5);
}

TEST_CASE("Question #3.1") {
    execute_test("question_3_test_1.in", test_1);
}