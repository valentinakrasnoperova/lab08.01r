#include "gtest/gtest.h"
#include "func.h"

using namespace std;

TEST(gTest, ReturnValue) {
    char arr[101]= {'w','h','i','l','e','t'};
    ASSERT_TRUE( Check(arr, 0));
}
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}

