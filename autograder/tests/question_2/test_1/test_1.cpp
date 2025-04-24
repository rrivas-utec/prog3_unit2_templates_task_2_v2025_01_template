//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "all_true.h"
using namespace std;

static void test_1() {
    REQUIRE(utils::logic::all_true(true, true, true, true));

}

TEST_CASE("Question #2.1") {
    execute_test("question_2_test_1.in", test_1);
}