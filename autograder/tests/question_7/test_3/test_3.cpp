//
// Created by rudri on 9/12/2020.
//
#include <iostream>
#include "catch.hpp"
#include "redirect_io.h"
#include "tuple_printer.h"
using namespace std;

static void test_3() {
    meta::utility::tuple_printer<bool>::print(tuple{true}, std::cout << std::boolalpha);
}

TEST_CASE("Question #7.3") {
    execute_test("question_7_test_3.in", test_3);
}