#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>
#include "CntTest.h"
#include "controlls.h"
CPPUNIT_TEST_SUITE_REGISTRATION(CntTest);
int main()
{
    CppUnit::TextUi::TestRunner runner;
    CppUnit::TestFactoryRegistry &registry = CppUnit::TestFactoryRegistry::getRegistry();
    runner.addTest(registry.makeTest() );
    runner.run();
    return 0;
}
