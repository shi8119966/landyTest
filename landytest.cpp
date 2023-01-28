﻿// landytest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <tuple>
using namespace std;


int main()
{

#if defined  _TEST
    bool a = true;
#else
    bool a = false;
#endif
    int n = 1;
    auto t = std::make_tuple(10, "Test", 3.14, std::ref(n), n);
    // get尖括号中的值必须是一个整型常量表达式。从0开始计数，意味着get<0>是第一个成员。
    std::cout << "The value of t is " << "("
        << std::get<0>(t) << ", " << std::get<1>(t) << ", "
        << std::get<2>(t) << ", " << std::get<3>(t) << ", "
        << std::get<4>(t) << ")\n";
    // 由于get返回指定元素的引用，所以可用来修改指定位置的元素的值。此处因为第4个元素是引用类型，所以被引用的值也会改变
    std::get<3>(t) = 9;
    std::cout << "4 value = " << std::get<4>(t) << endl << "3 value = " << std::get<3>(t) << endl;

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
