//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "invoke_multiple.h"
using namespace std;

static void test_4() {
    int count = 0;
    functional::meta::invoke_multiple([&count]{ count += 2; }, [&count]{ count *= 3; });
    std::cout << count << std::endl;
}

TEST_CASE("Question #5.4") {
    execute_test("question_5_test_4.in", test_4);
}