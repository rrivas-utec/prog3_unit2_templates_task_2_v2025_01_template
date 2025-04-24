//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "apply_to_all.h"
using namespace std;

static void test_2() {
    meta::utility::apply_to_all<[](int){ std::cout << "Hello world!" << std::endl; } >(1);
}

TEST_CASE("Question #4.2") {
    execute_test("question_4_test_2.in", test_2);
}