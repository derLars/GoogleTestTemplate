/*
 * SampleTestCase.h
 *
 *  Created on: Jan 21, 2017
 *      Author: Lars Schwensen
 */

#ifndef SAMPLETESTCASE_H_
#define SAMPLETESTCASE_H_

//INCLUDE THE CLASS UNDER TEST HERE
#include "../ClassUnderTest.h"

class SampleTestCase : public ::testing::Test {
public:
	~SampleTestCase() {}
	SampleTestCase() {}
protected:
	//INITIALIZE YOUR CLASS UNDER TEST HERE
	ClassUnderTest classUnderTest;
};

TEST_F(SampleTestCase, ClassUnderTest) {
	ASSERT_TRUE(classUnderTest.addNum(4,5) == 9);

	ASSERT_TRUE(classUnderTest.subNum(4,5) == 9);
}

#endif /* SAMPLETESTCASE_H_ */
