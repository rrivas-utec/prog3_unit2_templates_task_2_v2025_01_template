//
// Created by rudri on 9/12/2020.
//
#include <iostream>
#include "catch.hpp"
#include "redirect_io.h"
#include "tuple_printer.h"
using namespace std;

static void test_2() {
    meta::utility::tuple_printer<const char*, double, int>::print(tuple{"x", 3.5, 42}, std::cout);
}

TEST_CASE("Question #7.2") {
    execute_test("question_7_test_2.in", test_2);
}