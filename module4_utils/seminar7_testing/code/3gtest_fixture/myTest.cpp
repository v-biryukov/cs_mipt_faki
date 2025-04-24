#include <iostream>
#include <cstddef>
#include <linkedList.hpp>
#include <gtest/gtest.h>

class MyTestFixture : public testing::Test
{
protected:
    LinkedList<int> list;

public:
    void SetUp()
    {
        std::cout << "Setting up my list" << std::endl;
        for (size_t i = 0; i < 10; ++i)
            list.pushBack(10 * (i + 1));
    }

    void TearDown()
    {
        std::cout << "Tearing down" << std::endl;
    }
};

TEST_F(MyTestFixture, SizeIs10)
{
    EXPECT_EQ(list.size(), 10);
}


TEST_F(MyTestFixture, NotEmpty)
{
    EXPECT_FALSE(list.isEmpty());
}

TEST_F(MyTestFixture, FirstElement)
{
    int result = list.popFront();
    EXPECT_EQ(result, 10);
    EXPECT_EQ(list.size(), 9);
}




//int main()
//{
//    testing::InitGoogleTest();
//    auto result = RUN_ALL_TESTS();
//    std::cout << "RUN_ALL_TESTS returned: " << result << std::endl;
//}