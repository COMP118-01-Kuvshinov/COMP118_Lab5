/** \file UnitTest_Tutorial4Part2.cpp
* @todo
*/
#include "pch.h"
#include "CppUnitTest.h"
#include "../Matrix.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestTutorial4Part2
{
	TEST_CLASS(UnitTestTutorial4Part2)
	{
	public:

		// Testing
		TEST_METHOD(TestMethodSumOfCol_c0)
		{
			// Arrange
			double result;
			double mat[4][MAX_COL] = { 5, 0, 0, 0, 2 };

			// Act
			result = sumOfCol(mat, 0, 4);

			// Assert
			Assert::AreEqual((double)7.0, result);
		}

		TEST_METHOD(TestMethodSumORow_r0)
		{
			// Arrange
			double result;
			double mat[4][MAX_COL] = { 5, 0, 0, 0, 2 };

			// Act
			result = sumOfRow(mat, 0, 4);

			// Assert
			Assert::AreEqual((double)5.0, result);
		}

		TEST_METHOD(TestMethodIsRowOdd_r0)
		{
			// Arrange
			bool result;
			double mat[4][MAX_COL] = { 5, 0, 0, 0, 2 };

			// Act
			result = sumOfRow(mat, 0, 4);

			// Assert
			Assert::IsTrue(result);
		}
	};
}
