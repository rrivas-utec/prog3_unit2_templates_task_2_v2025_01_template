//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "printer_specialized.h"
using namespace std;

static void test_1() {
    printer<int>::print(42);
}

TEST_CASE("Question #10.1") {
    execute_test("question_10_test_1.in", test_1);
}