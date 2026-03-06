#include "monom.h"
#include <gtest/gtest.h>

TEST(Monom, can_create_monom)
{
    ASSERT_NO_THROW(Monom m);
}

TEST(Monom, can_create_monom_pows)
{
    ASSERT_NO_THROW(Monom m(2.5, 4, 2, 3));
}

TEST(Monom, can_create_monom_N)
{
    unsigned int N = 5;
    ASSERT_NO_THROW(Monom m(3.28, 5));
}

TEST(Monom, constr_copy)
{
    Monom m(2.5, 4, 2, 3);
    ASSERT_NO_THROW(Monom m1(m));
}

TEST(Monom, copied_monom_is_equal_to_original)
{
    Monom m(2.5, 1, 2, 3);
    Monom m1(m);
    EXPECT_EQ(m.GetA(), m1.GetA());
    EXPECT_EQ(m.GetN(), m1.GetN());
}

TEST(Monom, can_get_coefficient)
{
    Monom m(3.28, 1, 2, 3);
    EXPECT_DOUBLE_EQ(3.28, m.GetA());
}

TEST(Monom, can_get_power_x)
{
    Monom m(2.5, 3, 2, 1);
    EXPECT_EQ(3, m.GetPowX());
}

TEST(Monom, can_get_power_y)
{
    Monom m(2.5, 3, 2, 1);
    EXPECT_EQ(2, m.GetPowY());
}

TEST(Monom, can_get_power_z)
{
    Monom m(2.5, 3, 2, 1);
    EXPECT_EQ(1, m.GetPowZ());
}

TEST(Monom, can_set_power_x)
{
    Monom m(2.5, 1, 2, 3);
    m.SetPowX(5);
    EXPECT_EQ(5, m.GetPowX());
}

TEST(Monom, can_set_power_y)
{
    Monom m(2.5, 1, 2, 3);
    m.SetPowY(6);
    EXPECT_EQ(6, m.GetPowY());
}

TEST(Monom, can_set_power_z)
{
    Monom m(2.5, 1, 2, 3);
    m.SetPowZ(7);
    EXPECT_EQ(7, m.GetPowZ());
}

TEST(Monom, throws_when_add_monoms_with_different_powers)
{
    Monom m1(2.5, 1, 2, 3);
    Monom m2(3.5, 1, 2, 4);
    ASSERT_ANY_THROW(m1 + m2);
}

TEST(Monom, can_subtract_monoms_with_same_powers)
{
    Monom m1(5.0, 1, 2, 3);
    Monom m2(2.0, 1, 2, 3);
    Monom result = m1 - m2;
    EXPECT_EQ(3.0, result.GetA());
}

TEST(Monom, throw_subtract_monoms_with_diff_powers)
{
    Monom m1(5.0, 1, 2, 3);
    Monom m2(2.0, 1, 2, 4);
    ASSERT_ANY_THROW(m1 - m2);
}

TEST(Monom, can_multiply_monoms)
{
    Monom m1(2.5, 1, 2, 3);
    Monom m2(3.0, 2, 1, 4);
    Monom result = m1 * m2;
    EXPECT_EQ(7.5, result.GetA());
    EXPECT_EQ(3, result.GetPowX());
    EXPECT_EQ(3, result.GetPowY());
    EXPECT_EQ(7, result.GetPowZ());
}

TEST(Monom, can_compare_monoms)
{
    Monom m1(2.5, 3, 2, 1);
    Monom m2(3.0, 2, 3, 1);

    EXPECT_TRUE(m1 > m2);
}

