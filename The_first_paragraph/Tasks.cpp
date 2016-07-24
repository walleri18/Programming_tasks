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

// ������ ������
void six_tasks()
{
	// ������ �������������� ������������
	double oneCathetus(1), twoCathetus(1);

	// ��������� ������
	std::cout << std::endl
		<< "������� ������ ����� �������������� ������������: ";
	std::cin >> oneCathetus;

	std::cout << std::endl
		<< "������� ������ ����� �������������� ������������: ";
	std::cin >> twoCathetus;

	oneCathetus = std::abs(oneCathetus);
	twoCathetus = std::abs(twoCathetus);

	/*
		�����
	*/
	// ���������� ���������� �������������� ������������
	double hypotenuse = std::sqrt(std::pow(oneCathetus, 2) 
								  + std::pow(twoCathetus, 2));

	// ���������� ������� �������������� ������������
	double area = oneCathetus * twoCathetus / 2.0;

	// ����� ����������
	std::cout << std::endl
		<< "���������� �������������� ������������: "
		<< hypotenuse << std::endl
		<< "������� �������������� ������������: "
		<< area << std::endl;
}

// ������� ������
void seven_tasks()
{
	// ���������� ������ ����
	double oneManyLiters(0), twoManyLiters(0);

	// ����������� ������� �������
	double oneTemperaturePitcher(0), twoTemperaturePitcher(0);

	// ��������� ������
	std::cout << std::endl
		<< "������� ������ ����� �������: ";
	std::cin >> oneManyLiters;

	std::cout << std::endl
		<< "������� ������ ����� �������: ";
	std::cin >> twoManyLiters;

	std::cout << std::endl
		<< "������� ����������� ������� �������: ";
	std::cin >> oneTemperaturePitcher;

	std::cout << std::endl
		<< "������� ����������� ������� �������: ";
	std::cin >> twoTemperaturePitcher;

	/*
		�����
	*/
	// ���������� ������ �������������� �����
	double volumeMixture = oneManyLiters + twoManyLiters;

	// ���������� ����������� �����
	double temperatureMixture = 
		(oneManyLiters * oneTemperaturePitcher + 
		 twoManyLiters * twoTemperaturePitcher) 
		/ volumeMixture;

	// ����� ����������
	std::cout << std::endl
		<< "����� �����: " << volumeMixture << std::endl
		<< "����������� �����: " << temperatureMixture
		<< std::endl;
}

// ������� ������
void eight_tasks()
{
	// ���������� ����� n-���������
	int numberAngle(1);

	// ������ ���������� ������ ������� ������ n-��������
	double radius(1);

	// ��������� ������
	std::cout << std::endl
		<< "������� ���������� ����� n-���������: ";
	std::cin >> numberAngle;

	std::cout << std::endl
		<< "������� ������ ������ ������� ������ n-��������: ";
	std::cin >> radius;

	// ���������� ��������� n-���������
	double perimeter =
		2 * radius * numberAngle * std::sin(3.14 / numberAngle)
		* std::cos(3.14 / numberAngle);

	// ����� ����������
	std::cout << std::endl
		<< "�������� n-���������: " << perimeter << std::endl;
}

// ������� ������
void nine_tasks()
{
	// ������������� ��� ����������
	double oneResistance(1), twoResistance(1), 
		threeResistance(1);

	// ��������� ������

	do
	{
		std::cout << std::endl
			<< "������� ������������� ������� ���������: ";
		std::cin >> oneResistance;
	} while (oneResistance <= 0);

	do
	{
		std::cout << std::endl
			<< "������� ������������� ������� ���������: ";
		std::cin >> twoResistance;
	} while (twoResistance <= 0);

	do
	{
		std::cout << std::endl
			<< "������� ������������� �������� ���������: ";
		std::cin >> threeResistance;
	} while (threeResistance <= 0);

	/*
		�����
	*/
	// ���������� ������������� ���� ���������� �����������
	double resultResistance = 1 /
		(1 / oneResistance + 1 / twoResistance
		 + 1 / threeResistance);

	// ����� ����������
	std::cout << std::endl
		<< "����� ������������� ���� ���������� �����������: "
		<< resultResistance << std::endl;
}