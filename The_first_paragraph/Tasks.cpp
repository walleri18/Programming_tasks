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