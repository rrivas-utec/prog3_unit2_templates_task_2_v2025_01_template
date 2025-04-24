//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "apply_to_all.h"
using namespace std;

static void test_1() {
    vector<int> v;
    meta::utility::apply_to_all([&v](const int x){ v.push_back(x + 1); }, 1, 2, 3);
    for (const auto& item: v) std::cout << item << " ";
}

TEST_CASE("Question #4.1") {
    execute_test("question_4_test_1.in", test_1);
}