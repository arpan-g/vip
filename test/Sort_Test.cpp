#include <limits.h>
#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "sort.h"

class Sort_Test : public ::testing::Test {
	protected:
	 virtual void SetUp() {
	 }
	
	 virtual void TearDown() {
	 }
};

TEST_F(Sort_Test,testSort){
	
	int input[10] = {10,4,2,45,5,34,19,35,22,6};
	Sort sort;
	sort.merge_sort(input,0,10);
    EXPECT_THAT(input,ContainerEq(2,4,5,6,10,19,22,34,35,45));


}
