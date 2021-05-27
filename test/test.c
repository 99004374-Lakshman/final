#include "unity_internals.h"
#include "unity.h"
#include "header.h"
void add(void);
void setUp(){}
void tearDown(){}
/*Test for login password*/

int main()
{
	UNITY_BEGIN();
	RUN_TEST(add);
	return UNITY_END();
}

void add(void)
{
    
    TEST_ASSERT_EQUAL(10,add(5,5));
}	
