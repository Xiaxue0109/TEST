/*************************************************************************
	> File Name: test.h
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年08月11日 星期二 19时05分44秒
 ************************************************************************/

#ifndef _TEST_H
#define _TEST_H

#define TEST(a, b) void a##b()

#define EXPECT_EQ(a, b) printf("%s == %s ? %s\n", #a, #b, (a) == (b) ? "True" : "False");

int RUN_ALL_TESTS();

#endif
