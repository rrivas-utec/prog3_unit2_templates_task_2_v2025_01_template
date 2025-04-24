//
// Created by rudri on 9/12/2020.
//
#include <iostream>
#include "catch.hpp"
#include "redirect_io.h"
#include "tuple_printer.h"
using namespace std;

static void test_4() {
    meta::utility::tuple_printer<>::print(tuple{}, std::cout);
}

TEST_CASE("Question #7.4") {
    execute_test("question_7_test_4.in", test_4);
}