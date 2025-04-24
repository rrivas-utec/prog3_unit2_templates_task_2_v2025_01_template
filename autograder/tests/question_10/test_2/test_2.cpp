//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "printer_specialized.h"
using namespace std;

static void test_2() {
    printer<bool>::print(true);
}

TEST_CASE("Question #10.2") {
    execute_test("question_10_test_2.in", test_2);
}