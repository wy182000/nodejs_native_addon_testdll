// testdll.cpp : ���� DLL Ӧ�ó���ĵ���������
//

//#include "stdafx.h"
#include "testdll.h"

// ���ǵ���������һ��ʾ����
TESTDLL_API const char* func_hello(void)
{
    return " dll function hello world\n";
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� testdll.h
CHello::CHello()
{
    return;
}

const char* CHello::Hello() { return " dll class hello world\n"; }
