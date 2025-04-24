//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "static_array.h"
using namespace std;

static void test_4() {
    static_array<int, 5> arr = {4, 2, 1, 7, 5};
    std::sort(arr.begin(), arr.end());
    REQUIRE((arr[0] == 1 && arr[4] == 7));
}

TEST_CASE("Question #6.4") {
    execute_test("question_6_test_4.in", test_4);
}