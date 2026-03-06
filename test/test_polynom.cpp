#include "polynom.h"
#include <gtest/gtest.h>

TEST(Polynom, can_create_polynom)
{
    ASSERT_NO_THROW(Polynom p);
}

TEST(Polynom, can_create_copied_polynom)
{
    Polynom p;
    Monom m(2.5, 1, 2, 3);
    p.AddMonom(m);
    ASSERT_NO_THROW(Polynom p1(p));
}

//TEST(Polynom, can_create_polynom_from_string)
//{
//    ASSERT_NO_THROW(Polynom p("2.5x^1y^2z^3+3.0x^2y^1z^3"));
//}

TEST(Polynom, can_add_monom)
{
    Polynom p;
    Monom m(2.5, 1, 2, 3);
    ASSERT_NO_THROW(p.AddMonom(m));
}

TEST(Polynom, can_add_two_polynoms)
{
    Polynom p1;
    p1.AddMonom(Monom(2.5, 1, 2, 3));
    p1.AddMonom(Monom(3.0, 2, 1, 0));

    Polynom p2;
    p2.AddMonom(Monom(1.5, 1, 2, 3));
    p2.AddMonom(Monom(2.0, 0, 1, 1));

    ASSERT_NO_THROW(p1+p2);
}

TEST(Polynom, can_subtract_two_polynoms)
{
    Polynom p1;
    p1.AddMonom(Monom(5.0, 1, 2, 3));
    p1.AddMonom(Monom(3.0, 2, 1, 0));

    Polynom p2;
    p2.AddMonom(Monom(2.0, 1, 2, 3));
    p2.AddMonom(Monom(1.0, 0, 1, 1));

    ASSERT_NO_THROW(p1-p2);
}

TEST(Polynom, can_multiply_two_polynoms)
{
    Polynom p1;
    p1.AddMonom(Monom(2.0, 1, 0, 0));

    Polynom p2;
    p2.AddMonom(Monom(3.0, 1, 0, 0));
    p2.AddMonom(Monom(4.0, 0, 1, 0));

    ASSERT_NO_THROW(p1*p2);
}
