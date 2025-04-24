//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "comparator.h"
using namespace std;

static void test_1() {
    std::cout << std::boolalpha << algorithms::utility::comparator<std::less>::compare(2, 3);
}

TEST_CASE("Question #8.1") {
    execute_test("question_8_test_1.in", test_1);
}