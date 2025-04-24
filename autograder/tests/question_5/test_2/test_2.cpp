//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "invoke_multiple.h"
using namespace std;

static void test_2() {
    std::string out;
    functional::meta::invoke_multiple([&]{ out += "X"; }, [&]{ out += "Y"; }, [&]{ out += "Z"; });
    std::cout << out << std::endl;
}

TEST_CASE("Question #5.2") {
    execute_test("question_5_test_2.in", test_2);
}