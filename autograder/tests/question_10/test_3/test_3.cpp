//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "printer_specialized.h"
using namespace std;

static void test_3() {
    printer<vector<int>>::print({1,2,3});
}

TEST_CASE("Question #10.3") {
    execute_test("question_10_test_3.in", test_3);
}