//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "static_array.h"
using namespace std;

static void test_1() {
    static_array<int, 3> arr = {1, 2, 3};
    REQUIRE((arr[0] == 1 && arr[2] == 3));
}

TEST_CASE("Question #6.1") {
    execute_test("question_6_test_1.in", test_1);
}