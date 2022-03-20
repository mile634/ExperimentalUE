#pragma once

class TestClass
{
public:
	TestClass(int A, int B, int C)
		: a(A),
		  b(B),
		  c(C)
	{
	}

	TestClass() {}

	int a;
	int b;
	int c;
public:
	//TestClass(int _a, int _b, int _c): a(_a), b(_b),c(_c) {}
	// TestClass(int _a, int _b, int _c);
	// TestClass();

	TestClass Get();
};
