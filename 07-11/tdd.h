#ifndef TDD_H // this makes sure that tdd.h is only ever included once
#define TDD_H

#include <string>

void assertEquals(std::string expected, 
		  std::string actual, 
		  std::string message=""); // default parameter
    // if you don't supply anything for message,
    // (i.e., call assertEquals with only 2 args.),
    // then message gets set to ""

void assertEquals(int expected, 
		  int actual, 
		  std::string message="");


#define ASSERT_EQUALS(expected,actual) assertEquals(expected,actual,#actual)


void assertTrue(bool expression, std::string message="");

#define ASSERT_TRUE(expression) assertTrue(expression,#expression)

#endif // TDD_H
