//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "max_static.h"
using namespace std;

static void test_2() {
    STATIC_REQUIRE(compile_time::max_static<10, 10>() == 10);
}

TEST_CASE("Question #3.2") {
    execute_test("question_3_test_2.in", test_2);
}