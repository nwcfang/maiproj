#ifndef CNTTEST_H
#define CNTTEST_H
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
class CntTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE( CntTest );
    CPPUNIT_TEST(lookTest);
    CPPUNIT_TEST_SUITE_END();
public:
    void setUp()
    {}
    void tearDown()
    {}
    void lookTest()
    {
        CPPUNIT_ASSERT( true );
    }
};
#endif
