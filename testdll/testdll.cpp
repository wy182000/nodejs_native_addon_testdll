// testdll.cpp : 定义 DLL 应用程序的导出函数。
//

//#include "stdafx.h"
#include "testdll.h"

// 这是导出函数的一个示例。
TESTDLL_API const char* func_hello(void)
{
    return " dll function hello world\n";
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 testdll.h
CHello::CHello()
{
    return;
}

const char* CHello::Hello() { return " dll class hello world\n"; }
