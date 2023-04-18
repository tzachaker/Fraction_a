#include "doctest.h"
#include "sources/Fraction.hpp"
#include <string>
#include <iostream>
using namespace ariel;
using namespace std;

TEST_CASE("Division by 0"){
    CHECK_THROWS(Fraction (4,0));
}

TEST_CASE("An acceptable fraction") {
    Fraction f1(7,2), f2(11,5), f3(7,2), f4(14,4);
    CHECK(f1.getNumerator() == 7);
    CHECK(f1.getDenominator() == 2);
    CHECK_NOTHROW(Fraction(7,2));
    CHECK_NOTHROW(Fraction(11,5));
    CHECK(f1!=f2);
    CHECK_FALSE(f1!=f3);
    CHECK(f1==f3);
    CHECK(f1==f4);
}

TEST_CASE("operators +,-,*,/")
{
    Fraction f1(7,2), f2(11,5), f3(57,10), f4(13,10), f5(77,10), f6(35,22);
    CHECK(f1+f2 == f3);
    CHECK(f1-f2 == f4);
    CHECK(f1*f2 == f5);
    CHECK(f1/f2 == f6);
}

TEST_CASE("operators ++,--")
{
    Fraction f1(7,2), f2(11,5), f3(9,2), f4(6,5);
    CHECK_NOTHROW(f1++);
    CHECK_NOTHROW(f2--);
    CHECK(f1++ == f3);
    CHECK(f2-- == f4);
}

TEST_CASE("operators >,<,==,!=")
{
    Fraction f1(7,2), f2(11,5), f3(7,2);
    CHECK(f1>f2);
    CHECK(f2<f1);
    CHECK_FALSE(f2>f1);
    CHECK(f1==f3);
    CHECK(f1!=f2);
}


