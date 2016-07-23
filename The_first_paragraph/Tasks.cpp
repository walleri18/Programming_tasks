#include "Tasks.h"
#include <iostream>

// Первая задача
void one_tasks()
{
	double a(0), b(0);

	// Получение исходных данных
	std::cout << std::endl << "Введите пожалуйста число A: ";
	std::cin >> a;

	std::cout << std::endl << "Введите пожалуйста число B: ";
	std::cin >> b;

	/*
		Ответ
	*/
	// Сумма
	std::cout << a << " + " << b << " = " << (a + b) << std::endl;
	
	// Разность
	std::cout << a << " - " << b << " = " << (a - b) << std::endl;

	// Произведение
	std::cout << a << " * " << b << " = " << (a * b) << std::endl;
}

// Вторая задача
void two_tasks()
{
	double x(0), y(0);

	// Получение исходных данных
	std::cout << std::endl << "Введите пожалуйста число X: ";
	std::cin >> x;

	std::cout << std::endl << "Введите пожалуйста число Y: ";
	std::cin >> y;

	/*
		Ответ
	*/
	double result(0);

	result = (std::abs(x) - std::abs(y))/ (1 + std::abs(x * y));

	// Вывод результата
	std::cout << "Результат: " << result << std::endl;
}

// Третья задача
void three_tasks()
{
	// Длина ребра куба
	double edge(0);

	// Получение исходных данных
	std::cout << std::endl << "Введите пожалуйста размер ребра куба: ";
	std::cin >> edge;

	/*
		Ответ
	*/
	// Вычисление объёма куба
	double volumeCub = std::pow(edge, 3);

	// Вычисление площади боковой поверхности
	double areaSideSurface = std::pow(edge, 2) * 4;

	// Вывод результата
	std::cout << std::endl << "Объём куба: " << volumeCub
		<< std::endl << "Площадь боковой поверхности: "
		<< areaSideSurface << std::endl << std::endl;
}

// Четвёртая задача
void four_tasks()
{
	// Два действительных положительных числа
	double one_number(1), two_number(1);

	// Получение данных
	std::cout << std::endl << "Введите пожалуйста первое положительное число: ";
	std::cin >> one_number;

	std::cout << std::endl << "Введите пожалуйста второе положительное число: ";
	std::cin >> two_number;

	one_number = std::abs(one_number);
	two_number = std::abs(two_number);

	/*
		Ответ
	*/

	// Вычисление среднего арифметического
	double average = (one_number + two_number) / 2;

	// Вычисление среднего геометрического
	double geometricMean = std::sqrt(one_number * two_number);
	
	// Вывод результата
	std::cout << std::endl << "Среднее арифметическое: "
		<< average << std::endl << "Среднее геометрическое: "
		<< geometricMean << std::endl << std::endl;
}

// Пятая задача
void five_tasks()
{
	// Два действительных числа
	double one_number(0), two_number(0);

	// Получение данных
	std::cout << std::endl << "Введите первое число: ";
	std::cin >> one_number;

	std::cout << std::endl << "Введите второе число: ";
	std::cin >> two_number;

	/*
		Ответ
	*/
	// Вычисление среднего арифметического
	double average = (one_number + two_number) / 2.0;

	// Вычисление среднего геометрического модулей
	double geometricMean = std::sqrt(std::abs(one_number) 
									 * std::abs(two_number));

	// Вывод результата
	std::cout << std::endl << "Среднее арифметическое: "
		<< average << std::endl
		<< "Среднее геометрическое: " 
		<< geometricMean << std::endl;
}