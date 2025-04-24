//
// Created by rudri on 9/12/2020.
//
#include <iostream>
#include "catch.hpp"
#include "redirect_io.h"
#include "tuple_printer.h"
using namespace std;

static void test_1() {
    meta::utility::tuple_printer<int, int, int>::print(tuple{10, 20, 30}, std::cout);
}

TEST_CASE("Question #7.1") {
    execute_test("question_7_test_1.in", test_1);
}