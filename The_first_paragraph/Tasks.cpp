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

// ������ ������
void two_tasks()
{
	double x(0), y(0);

	// ��������� �������� ������
	std::cout << std::endl << "������� ���������� ����� X: ";
	std::cin >> x;

	std::cout << std::endl << "������� ���������� ����� Y: ";
	std::cin >> y;

	/*
		�����
	*/
	double result(0);

	result = (std::abs(x) - std::abs(y))/ (1 + std::abs(x * y));

	// ����� ����������
	std::cout << "���������: " << result << std::endl;
}