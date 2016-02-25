/**
 * Unit Tests for Rando Test
**/

#include <gtest/gtest.h>
#include "rando.h"

/*  
	FUNCTIONS WE NEED TO TEST:

	bool shouldWorry(bool,bool,bool);
	bool isDivisbleBy(int,int);
	bool isPrime(int);
	int nearestToZero(int,int);
*/
 
class RandoTest : public ::testing::Test
{
	protected:
		RandoTest(){} //constructor runs before each test
		virtual ~RandoTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(RandoTest, allChildrenSmile)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(true,true,true) );
}

TEST(RandoTest, divisibleByEvenly)
{
	Rando rando;
	ASSERT_TRUE(rando.isDivisibleBy(4, 2));
}

TEST(RandoTest, divisibleByZero)
{
	Rando rando;
	ASSERT_TRUE(rando.isDivisibleBy(0, 2));
}

TEST(RandoTest, divisibleByUneven)
{
	Rando rando;
	ASSERT_FALSE(rando.isDivisibleBy(7, 2));
}

TEST(RandoTest, divisibleByNegFirst)
{
	Rando rando;
	ASSERT_FALSE(rando.isDivisibleBy(-9, 2));
	ASSERT_TRUE(rando.isDivisibleBy(-8, 2));
}

TEST(RandoTest, divisibleByNegSecond)
{
	Rando rando;
	ASSERT_FALSE(rando.isDivisibleBy(19, -3));
	ASSERT_TRUE(rando.isDivisibleBy(12, -3));
}
