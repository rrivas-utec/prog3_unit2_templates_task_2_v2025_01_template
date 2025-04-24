//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "all_true.h"
using namespace std;

static void test_3() {
    REQUIRE(utils::logic::all_true(true));
}

TEST_CASE("Question #2.3") {
    execute_test("question_2_test_3.in", test_3);
}