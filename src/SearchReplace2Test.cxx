/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XmlPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::XmlPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::XmlPrinter >( tmp, argc, argv );
    return status;
}
bool suite_SearchReplace2Test_init = false;
#include "/var/www/html/codeit/workspace/SearchReplace2/src/SearchReplace2Test.h"

static SearchReplace2Test suite_SearchReplace2Test;

static CxxTest::List Tests_SearchReplace2Test = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SearchReplace2Test( "/var/www/html/codeit/workspace/SearchReplace2/src/SearchReplace2Test.h", 6, "SearchReplace2Test", suite_SearchReplace2Test, Tests_SearchReplace2Test );

static class TestDescription_suite_SearchReplace2Test_test_Unit_Test_1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SearchReplace2Test_test_Unit_Test_1() : CxxTest::RealTestDescription( Tests_SearchReplace2Test, suiteDescription_SearchReplace2Test, 16, "test_Unit_Test_1" ) {}
 void runTest() { suite_SearchReplace2Test.test_Unit_Test_1(); }
} testDescription_suite_SearchReplace2Test_test_Unit_Test_1;

static class TestDescription_suite_SearchReplace2Test_test_Unit_Test_2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SearchReplace2Test_test_Unit_Test_2() : CxxTest::RealTestDescription( Tests_SearchReplace2Test, suiteDescription_SearchReplace2Test, 20, "test_Unit_Test_2" ) {}
 void runTest() { suite_SearchReplace2Test.test_Unit_Test_2(); }
} testDescription_suite_SearchReplace2Test_test_Unit_Test_2;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
