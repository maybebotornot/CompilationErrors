#include "pch.h"

TEST(TestCaseName, TestName) 
{
	// the second compilation error is fixed by disabling pch
	module3_namespace::C<int> c;
}