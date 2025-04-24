//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "apply_to_all.h"
using namespace std;

static void test_3() {
    vector<const char*> logs;
    meta::utility::apply_to_all([&](const char* s){ logs.push_back(s); }, "uno", "dos", "tres");
    for (const auto& log : logs) std::cout << log << " ";
}

TEST_CASE("Question #4.3") {
    execute_test("question_4_test_3.in", test_3);
}