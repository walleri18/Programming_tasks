#include "Tasks.h"
#include <iostream>

// ������ ������
void one_tasks()
{
	double a(0), b(0);

	// ��������� �������� ������
	std::cout << std::endl << "������� ���������� ����� A: ";
	std::cin >> a;

	std::cout << std::endl << "������� ���������� ����� B: ";
	std::cin >> b;

	/*
		�����
	*/
	// �����
	std::cout << a << " + " << b << " = " << (a + b) << std::endl;
	
	// ��������
	std::cout << a << " - " << b << " = " << (a - b) << std::endl;

	// ������������
	std::cout << a << " * " << b << " = " << (a * b) << std::endl;
}