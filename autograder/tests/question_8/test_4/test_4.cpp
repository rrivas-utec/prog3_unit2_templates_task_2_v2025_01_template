//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "comparator.h"
using namespace std;

struct Person {
    int age = 0;
    bool operator<(const Person &other) const { return age < other.age; }
};

static void test_4() {
    std::cout << std::boolalpha << algorithms::utility::comparator<std::less>::compare(Person{20}, Person{30});
}

TEST_CASE("Question #8.4") {
    execute_test("question_8_test_4.in", test_4);
}