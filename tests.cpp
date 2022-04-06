#include "mymath.cpp"
#include "mymath.hpp"
#include <gtest/gtest.h>
 
TEST(SumTest, PositiveNos) { 
    mymath cadd;
    ASSERT_DOUBLE_EQ(7, cadd.calc_add(3,4));
    //ASSERT_DOUBLE_EQ(6461008, cadd.calc_add(5764687,696321));
}
 
TEST(SumTest, NegativeNos) {
    mymath cadd;
    ASSERT_DOUBLE_EQ(-1, cadd.calc_add(-4,3));
    //ASSERT_DOUBLE_EQ(-2796703, cadd.calc_add(5126792,-7923495));
}

TEST(SubTest, PositiveNos){
    mymath csub;
    ASSERT_DOUBLE_EQ(2,csub.calc_sub(4,2));

}

TEST(SubTest, NegativeNos){
    mymath csub;
    ASSERT_DOUBLE_EQ(-3,csub.calc_sub(2,5));

}

TEST(MultTest, PositiveNos){
    mymath cmult;
    ASSERT_DOUBLE_EQ(9,cmult.calc_mult(3,3));

}
TEST(MultTest, NegNos){
    mymath cmult;
    ASSERT_DOUBLE_EQ(-240,cmult.calc_mult(60,-4));

}
TEST(DivTest, PositiveNos){
    mymath cdiv;
    ASSERT_DOUBLE_EQ(10,cdiv.calc_div(100,10));

}
TEST(DivTest, NegNos){
    mymath cdiv;
    ASSERT_DOUBLE_EQ(-9,cdiv.calc_div(-81,9));

}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}