//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "static_array.h"
using namespace std;

static void test_3() {
    static_array<int, 20> arr;
    arr[1] = 30;
    REQUIRE(arr[1] == 30);
}

TEST_CASE("Question #6.3") {
    execute_test("question_6_test_3.in", test_3);
}