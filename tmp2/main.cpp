#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>

class MyTest : public CppUnit::TestFixture
{
   CPPUNIT_TEST_SUITE(MyTest);
   CPPUNIT_TEST(myTest1);
   CPPUNIT_TEST(myTest2);
   //CPPUNIT_TEST(myTest3);
   CPPUNIT_TEST_SUITE_END();
public:
   void setUp() {
       // инициализация
   }
   void tearDown()    {
       // деинициализация
   }
   void myTest1()    {
       CPPUNIT_ASSERT(true);
   }
   void myTest2()    {
       CPPUNIT_ASSERT(true);
   }
   //void myTest3()    {
       //CPPUNIT_ASSERT(false &&amp; true);
   //}
};


CPPUNIT_TEST_SUITE_REGISTRATION(MyTest);

int main()
{
   CppUnit::TextUi::TestRunner runner;
   CppUnit::TestFactoryRegistry &registry = CppUnit::TestFactoryRegistry::getRegistry();
   runner.addTest( registry.makeTest() );
   runner.run();
   return 0;
}

