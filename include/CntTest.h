#include <cppunit/TestFixture.h>
class CntTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE( CntTest );
    CPPUNIT_TEST(lookTest);
    CPPUNIT_TEST_SUITE_END();
public:
    void setUp()
    {
        initCnt();
        
    }
    void lookTest()
    {
        CPPUNIT_ASSERT(lookAround () );
    }
}
