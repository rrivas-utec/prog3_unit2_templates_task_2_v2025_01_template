//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "all_true.h"
using namespace std;

static void test_4() {
    REQUIRE(!utils::logic::all_true(false));
}

TEST_CASE("Question #2.4") {
    execute_test("question_2_test_4.in", test_4);
}