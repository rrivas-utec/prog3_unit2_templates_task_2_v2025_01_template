//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "invoke_multiple.h"
using namespace std;

static void test_3() {
    functional::meta::invoke_multiple();
}

TEST_CASE("Question #5.3") {
    execute_test("question_5_test_3.in", test_3);
}