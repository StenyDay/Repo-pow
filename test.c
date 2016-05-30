#include <stdlib.h>
#include "ctest.h"
#include "library.h"



CTEST(total,test1)
{
    const int a = 1, b = -70, c = 600;
    Square z = func1(a, b, c);
    ASSERT_DBL_NEAR(60, z.res1);
    ASSERT_DBL_NEAR(10, z.res2);
}

CTEST(total,test2)
{
    int a = 1, b = 4, c = 4;
    Square z = func1(a,b,c);
    ASSERT_DBL_NEAR(1, z.state);
    ASSERT_DBL_NEAR(-2, z.res1);
}

CTEST(total,test3)
{
    int a = 1, b = 3, c = 4;
    Square z = func1(a,b,c);
    ASSERT_DBL_NEAR(0, z.state);
}

CTEST(total,test4)
{
    const int a = 2, b =-3, c =-5;
    Square z = func1(a, b, c);
    ASSERT_DBL_NEAR(2.5, z.res1);
    ASSERT_DBL_NEAR(-1, z.res2);
}
