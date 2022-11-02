#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_Lab_05_1/Lab_05_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab051
{
	TEST_CLASS(lab051)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = h(1, 1);
		}
	};
}
