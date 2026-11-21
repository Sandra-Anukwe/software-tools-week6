#include "unity.h"

int add(int first, int second);
int subtract(int first, int second);
int multiply(int first, int second);

void setUp(void)
{
}

void tearDown(void)
{
}

void test_add(void)
{
    TEST_ASSERT_EQUAL_INT(8, add(5, 3));
}

void test_subtract(void)
{
    TEST_ASSERT_EQUAL_INT(2, subtract(5, 3));
}

void test_multiply(void)
{
    TEST_ASSERT_EQUAL_INT(15, multiply(5, 3));
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_add);
    RUN_TEST(test_subtract);
    RUN_TEST(test_multiply);

    return UNITY_END();
}
