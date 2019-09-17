#include <iostream>
#include <gtest/gtest.h>
#include "../bit_array.h"


TEST(bit_array_testing, creating_bit_array)
{
    Bit_array a(0xFF);
    ASSERT_TRUE(a[0]==255);
}


TEST(bit_array_testing, copy_constructor_testing)
{
    Bit_array a(0xFF);
    Bit_array b(a);
    ASSERT_TRUE(b[0]==0xFF);
}


TEST(bit_array_testing,left_shift)
{
    Bit_array a(0xFF);
    a=<<2;
    ASSERT_TRUE(a[0]==0xFF0);
}


TEST(bit_array_testing, right_shift)
{
    Bit_array a(0xFF);
    a=>>2;
    ASSERT_TRUE(a[0]==0xF);

}


TEST(bit_array_testing, negation_operator_and_operator=)
{
    Bit_array a(0xFF);
    a = ~a;
    ASSERT_TRUE(a[0]==0x00);
}


TEST(bit_array_testing, logic_AND)
{
    Bit_array a(0xFF);
    Bit_array b;
    b = ~a;
    b&=a;
    ASSERT_TRUE(b[0]==0x0)
}


TEST(bit_array_testing, logic_OR)
{
    Bit_array a(0xFF);
    Bit_array b;
    b|=a;
    ASSERT_TRUE(b[0]==0xFF)
}


TEST(bit_array_testing, creating_bit_array)
{
    Bit_array a(0xFF);
    ASSERT_TRUE(a.get_bit(4)==1);
    Bit_array b;
    b = ~a;
    ASSERT_TRUE(a.get_bit(4)==0);
}


TEST(bit_array_testing, set_bit_testing)
{
    Bit_array a(0xFF);
    a.set_bit(3,0);
    ASSERT_TRUE(a.get_bit(3)==0);
}


TEST(bit_array_testing, set_length_and_get_length_test)
{
    Bit_array a(0xFF);
    a.set_length(64);
    ASSERT_TRUE(a.get_length()==64;)
}









int main(int argc, char** argv)
{
    //freopen("test.txt", "w+", stdout);
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
