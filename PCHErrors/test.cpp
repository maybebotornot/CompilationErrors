#include "pch.h"

TEST(TestCaseName, TestName) 
{
	// the second compilation error is fixed by disabling pch
	module2_namespace::C<int> c;
}