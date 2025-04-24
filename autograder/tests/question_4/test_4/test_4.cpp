//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "apply_to_all.h"
using namespace std;

static void test_4() {
    static int count = 0;
    meta::utility::apply_to_all<[](auto i){ ++count; }>(1, 2, 3, 4);
    std::cout << count;
}

TEST_CASE("Question #4.4") {
    execute_test("question_4_test_4.in", test_4);
}