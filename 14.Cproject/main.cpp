/*************************************************************************
	> File Name: main.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年08月09日 星期日 11时44分18秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <gtest/gtest.h>

int add(int a, int b) {
    return a + b;
}

TEST(testFunc, add) {
    //EXPECT会告诉你错了，但是程序还会运行下边的语句测试
    EXPECT_EQ(add(5, 3), 8);
    EXPECT_EQ(add(5, 3), 9);
    //ASSERT 会强制结束测试样例
    ASSERT_EQ(add(1, 4), 7);
    EXPECT_EQ(add(6, 3), 13);
} 
// TEST 和 C 语言程序的不同
// Google test 中ASSERT强制结束测试
// C语言结束整个程序

int main(int argc, char *argv[]) {
    testing::InitGoogleTest(&argc, argv); //将命令行参数传递给gtest
    return RUN_ALL_TESTS(); //RUN_ALL_TESTS()运行所有测试案例
}

//编译的语句：g++ -L ./lib main.cpp -lgtest -I ./include -lpthread
