#include "unity_internals.h"
#include "unity.h"
#include "header.h"
void test_add(void);
void setUp(){}
void tearDown(){}
/*Test for login password*/

int main()
{
	UNITY_BEGIN();
	RUN_TEST(test_add);
	return UNITY_END();
}

void test_add(void)
{
    
    TEST_ASSERT_EQUAL(10,add(5,5));
}	
