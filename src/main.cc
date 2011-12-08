#include "controlls.h"
#include "CntTest.h"
#include <cppunit/ui/text/TestRunner.h>
CPPUNIT_TEST_SUITE_REGISTRATION(CntTest);
int main()
{
    CppUnit::TextUi::TestRunner runner;
    CppUnit::TestFactoryRegistry &registry = CppUnit::testFactoryRegistry::getRegistry();
    runner.assTest(registry.makeTest() );
    runner.run();
    return 0;
}
