//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "comparator.h"
using namespace std;

static void test_2() {
    std::cout << std::boolalpha << algorithms::utility::comparator<std::greater>::compare(9, 2);

}

TEST_CASE("Question #8.2") {
    execute_test("question_8_test_2.in", test_2);
}