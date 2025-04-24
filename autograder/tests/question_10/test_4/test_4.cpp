//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "printer_specialized.h"
using namespace std;

static void test_4() {
    printer<vector<string>>::print({});
}

TEST_CASE("Question #10.4") {
    execute_test("question_10_test_4.in", test_4);
}