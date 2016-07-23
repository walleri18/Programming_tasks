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

// ������ ������
void three_tasks()
{
	// ����� ����� ����
	double edge(0);

	// ��������� �������� ������
	std::cout << std::endl << "������� ���������� ������ ����� ����: ";
	std::cin >> edge;

	/*
		�����
	*/
	// ���������� ������ ����
	double volumeCub = std::pow(edge, 3);

	// ���������� ������� ������� �����������
	double areaSideSurface = std::pow(edge, 2) * 4;

	// ����� ����������
	std::cout << std::endl << "����� ����: " << volumeCub
		<< std::endl << "������� ������� �����������: "
		<< areaSideSurface << std::endl << std::endl;
}

// �������� ������
void four_tasks()
{
	// ��� �������������� ������������� �����
	double one_number(1), two_number(1);

	// ��������� ������
	std::cout << std::endl << "������� ���������� ������ ������������� �����: ";
	std::cin >> one_number;

	std::cout << std::endl << "������� ���������� ������ ������������� �����: ";
	std::cin >> two_number;

	one_number = std::abs(one_number);
	two_number = std::abs(two_number);

	/*
		�����
	*/

	// ���������� �������� ���������������
	double average = (one_number + two_number) / 2;

	// ���������� �������� ���������������
	double geometricMean = std::sqrt(one_number * two_number);
	
	// ����� ����������
	std::cout << std::endl << "������� ��������������: "
		<< average << std::endl << "������� ��������������: "
		<< geometricMean << std::endl << std::endl;
}

// ����� ������
void five_tasks()
{
	// ��� �������������� �����
	double one_number(0), two_number(0);

	// ��������� ������
	std::cout << std::endl << "������� ������ �����: ";
	std::cin >> one_number;

	std::cout << std::endl << "������� ������ �����: ";
	std::cin >> two_number;

	/*
		�����
	*/
	// ���������� �������� ���������������
	double average = (one_number + two_number) / 2.0;

	// ���������� �������� ��������������� �������
	double geometricMean = std::sqrt(std::abs(one_number) 
									 * std::abs(two_number));

	// ����� ����������
	std::cout << std::endl << "������� ��������������: "
		<< average << std::endl
		<< "������� ��������������: " 
		<< geometricMean << std::endl;
}