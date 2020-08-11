/*************************************************************************
	> File Name: main.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年08月09日 星期日 11时44分18秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <haizei/test.h>

int add(int a, int b) {
    return a + b;
}

TEST(testFunc, add) {
    //EXPECT会告诉错了，但是还会运行下边的语句
    EXPECT_EQ(add(5, 3), 8);
    EXPECT_EQ(add(5, 3), 9);
    //ASSERT 会强制结束测试样例
    //ASSERT_EQ(add(1, 4), 7);
    EXPECT_EQ(add(6, 3), 13);
} 

TEST(test, Funcadd) {
    EXPECT_EQ(add(1, 4), 9);
    EXPECT_EQ(add(4, 8), 12);
    EXPECT_EQ(add(6, 9), 19);
}

int main(int argc, char *argv[]) {
    return RUN_ALL_TESTS(); //RUN_ALL_TESTS()运行所有测试案例
}

