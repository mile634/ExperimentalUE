#include "Test2.h"

#include "TestClass.h"

Test2::Test2(TestClass* a)
{
	TestClass *b = new TestClass();
	b->a = 1;
	b->b = 3;
	b->c = 4;
	obj = b;
}
