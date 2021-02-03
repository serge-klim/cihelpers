#define BOOST_TEST_MODULE DummyTests

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(DummyTestSuite)


BOOST_AUTO_TEST_CASE(DummyTest)
{
	BOOST_CHECK("just dummy check to make sure it compiles and runs");
}


BOOST_AUTO_TEST_SUITE_END()
