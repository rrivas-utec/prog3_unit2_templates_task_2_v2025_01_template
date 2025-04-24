//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "invoke_multiple.h"
using namespace std;

static void test_1() {
    int a = 0, b = 0;
    functional::meta::invoke_multiple([&]{ a = 5; }, [&]{ b = 10; });
    std::cout << a << " " << b << std::endl;
}

TEST_CASE("Question #5.1") {
    execute_test("question_5_test_1.in", test_1);
}