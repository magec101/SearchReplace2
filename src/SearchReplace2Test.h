#include <cxxtest/TestSuite.h>


void searchReplace2Main(int argc, const char** argv, char result[]);

class SearchReplace2Test : public CxxTest::TestSuite
{

public:
	void setUp() {
	}

	void tearDown(){
	}

	void test_Unit_Test_1(){
		TS_SKIP("Unit tests are skipped, please author unit tests, if required");
	}
	
	void test_Unit_Test_2(){
	    
	    const char *largv[] = {"1", "CONCATENATE", "CAT", "DOGs" };
	    char result[100];

	    searchReplace2Main(4, largv, result);
		
	
		TS_ASSERT_EQUALS("CONDOGsENATE", result);


	}
	
};
