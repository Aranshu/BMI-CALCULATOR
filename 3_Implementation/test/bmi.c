/**
 * @file bmi.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-05-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "unity.h"
#include "bodymassindex.h"


void setUp(void)
{
	
}
void tearDown(void)
{
	
}
/**
 * @brief To Test Normal Weight
 * 
 */
void test_NormalWeight()
{
	TEST_ASSERT_EQUAL(BodyMassIndex(60,5.9),20.00);
}
/**
 * @brief To Test Over Weight
 * 
 */
void test_OverWeight()
{
	TEST_ASSERT_EQUAL(BodyMassIndex(80,5.1),31.00);
}
/**
 * @brief To Test Under Weight
 * 
 */
void test_UnderWeight()
{
	TEST_ASSERT_EQUAL(BodyMassIndex(50,5.9),16.00);
}
/**
 * @brief To Test Body Mass Index
 * 
 */
void test_BodyMassIndex()
{
	TEST_ASSERT_EQUAL(BodyMassIndex(60,5.9),20.00);
}

int main()
{
	UnityBegin("Unit_Testing");	
	RUN_TEST(test_BodyMassIndex);
	RUN_TEST(test_UnderWeight);
	RUN_TEST(test_OverWeight);
	RUN_TEST(test_NormalWeight);
	return(UnityEnd());		
}
