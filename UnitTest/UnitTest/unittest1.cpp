#include "stdafx.h"
#include "CppUnitTest.h"
#include"Account.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	TEST_CLASS(unittest1)
	{
	public:
		
		
		TEST_METHOD(getuer)
		{
			account a;
			string s = "helio";
			string p = "123";
			a.setaccount(s,p);
			string t = "helio";
			Assert::AreEqual(a.getuser(),t);
		}
		
	};
}