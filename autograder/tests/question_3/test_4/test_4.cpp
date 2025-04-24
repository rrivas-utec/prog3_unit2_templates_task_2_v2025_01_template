//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "max_static.h"
using namespace std;

static void test_4() {
    STATIC_REQUIRE(compile_time::max_static<-5, -2>() == -2);
}

TEST_CASE("Question #3.4") {
    execute_test("question_3_test_4.in", test_4);
}