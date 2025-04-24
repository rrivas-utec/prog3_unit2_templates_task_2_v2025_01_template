//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "max_static.h"
using namespace std;

static void test_3() {
    static_assert(compile_time::max_static<0, -1>() == 0);
}

TEST_CASE("Question #3.3") {
    execute_test("question_3_test_3.in", test_3);
}